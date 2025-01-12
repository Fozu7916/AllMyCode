#include <iostream>
#include "sqlite3.h"
#include <vector>
#include <string>

class Users {
public:
    int id = 0;
    int balance = 0;
    std::string name = "";
    std::string pas = "";
    int GetBalance() const { return balance; }
    int GetID() const { return id; }
};



class Data
{
private:
    std::string pas = "";
    std::string user = "";
    int id = 0;
    int balance = 0;
    bool logged = false;

    std::vector<Users> Players;
    sqlite3* db;
    sqlite3_stmt* stmt;
public:
    int GetBalance() const { return balance; }
    int GetID() const { return id; }
    bool Logged() const { return logged; }

    Data() {
        
        int exit = sqlite3_open("zxc.db", &db);
        if (exit != SQLITE_OK) {
            std::cerr << "Ошибка при открытии базы данных: " << sqlite3_errmsg(db) << std::endl;
        }

        const char* sqlGET = "SELECT * FROM Users;";
        // Подготовка SQL-запроса
        if (sqlite3_prepare_v2(db, sqlGET, -1, &stmt, nullptr) != SQLITE_OK) {
            std::cerr << "Ошибка при подготовке запроса: " << sqlite3_errmsg(db) << std::endl;
            sqlite3_close(db);
        }

        // Выполнение запроса и извлечение данных
        while (sqlite3_step(stmt) == SQLITE_ROW) {
            Users user;
            int num = sqlite3_column_int(stmt, 0);                    // Колонка Num
            const unsigned char* username = sqlite3_column_text(stmt, 1); // Колонка Username
            const unsigned char* password = sqlite3_column_text(stmt, 2); // Колонка Password
            int balance1 = sqlite3_column_int(stmt, 3);

            user.id = num;
            user.name.assign(reinterpret_cast<const char*>(username)); // Присваиваем имя
            user.pas.assign(reinterpret_cast<const char*>(password)); // Присваиваем пароль
            user.balance = balance1; //Вычисляем баланс

            Players.push_back(user);
           
        }
    }


    void Registr() {
        std::cout << "Введите имя пользователя: ";
        std::cin >> this->user;

        // Проверка на существование пользователя
        for (const auto& player : Players) {
            if (player.name == user) {
                std::cout << "Имя пользователя уже занято. Попробуйте другое." << std::endl;
                return; // Выход из метода, если пользователь существует
            }
        }

        std::cout << "Введите пароль: ";
        std::cin >> this->pas;

        // Вставка нового пользователя в базу данных
        const char* sqlINSERT = "INSERT INTO Users (Username, Password) VALUES (?, ?);";
        sqlite3_stmt* insert_stmt = nullptr;

        // Подготовка запроса
        if (sqlite3_prepare_v2(db, sqlINSERT, -1, &insert_stmt, nullptr) != SQLITE_OK) {
            std::cerr << "Ошибка при подготовке запроса: " << sqlite3_errmsg(db) << std::endl;
            return; // Выход, если запрос не удалось подготовить
        }

        // Привязываем значения
        sqlite3_bind_text(insert_stmt, 1, user.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(insert_stmt, 2, pas.c_str(), -1, SQLITE_STATIC);

        // Выполняем запрос
        if (sqlite3_step(insert_stmt) != SQLITE_DONE) {
            std::cerr << "Ошибка при вставке данных: " << sqlite3_errmsg(db) << std::endl;
        }
        else {
            std::cout << "Регистрация успешна!" << std::endl;
            // Добавляем пользователя в локальный вектор Players для дальнейшей работы
            Users newUser;
            newUser.name = user;
            newUser.pas = pas;
            Players.push_back(newUser);
        }

        // Освобождаем ресурсы
        sqlite3_finalize(insert_stmt);
        Login();
    }
    void Login()
    {
        std::cout << "Введите имя пользователя: ";
        std::cin >> this->user;

        std::cout << "Введите пароль: ";
        std::cin >> this->pas;

        for (int i = 0; i < Players.size(); i++) {
            if (pas == Players[i].pas && user == Players[i].name) {
                logged = true;
                this->balance=Players[i].balance;
                this->id = Players[i].id;
                break;
            }
        }
        if (!logged)
        {
            std::cout << "Неверное имя пользователя или пароль." << std::endl;
            Login();
        }
    }

    void Beforelogin()
    {
        int otvet = 0; bool xw = true;
        std::cout << "Добро пожаловать. Хотите создать новый аккаунт или у вас уже есть?(1-Войти  2-Зарегестрироваться)  ";
        while (xw)
        {
            std::cin >> otvet;
            switch (otvet)
            {
            case 1:
                xw = false;
                Login();

                // очистка ресурсов и закрытие дб
                sqlite3_finalize(stmt);
                sqlite3_close(db);

                break;
            case 2:
                xw = false;
                Registr();

                //очистка ресурсов и закрытие дб
                sqlite3_finalize(stmt);
                sqlite3_close(db);

                break;
            default:
                std::cout << "Выберите корректный вариант \n";
                break;
            }
        }
    }
};


class Balance {
private:
    float income = 0;
    float expenses = 0;
    int id = 0;
public:
    int balance = 0;
    int  Knowbalance() const { return balance; }
    int  Knowexpenses() const { return expenses; }
    int  Knowincome() const { return income; }
    void SetBalance(int a)  { balance = a; }
    void SetID(int a) { id = a; }

   

    void Addmoney() {
        std::cout << "Введите сумму доходов ";
        std::cin >> income;

        if (income > 0)
        {
            std::cout << "Доходы пополнены " << "\n";
            balance = balance + income;

            //Изменения значения в дб
            sqlite3* db;
            sqlite3_stmt* stmt;
            int exit = sqlite3_open("zxc.db", &db);
            if (exit != SQLITE_OK) {
                std::cerr << "Ошибка при открытии базы данных: " << sqlite3_errmsg(db) << std::endl;
            }

            // Правильный SQL запрос
            std::string updateSQL = "UPDATE USERS SET balance = ? WHERE NUM = ?;";


            exit = sqlite3_prepare_v2(db, updateSQL.c_str(), -1, &stmt, nullptr);
            if (exit != SQLITE_OK) {
                std::cerr << "Ошибка при подготовке SQL запроса: " << sqlite3_errmsg(db) << std::endl;
            }
            else {
                // Привязываем значения к параметрам запроса
                sqlite3_bind_int(stmt, 1, balance);
                sqlite3_bind_int(stmt, 2, id);

                exit = sqlite3_step(stmt);
                if (exit == SQLITE_DONE) {
                    std::cout << "Row with id = " << id << " updated successfully." << std::endl;
                }
                else {
                    std::cerr << "Failed to update row: " << sqlite3_errmsg(db) << std::endl;
                }
            }
        }
        else
        {
            std::cout << "Введено некоректное число" << "\n";
        }
    }
    void Losemoney() {
        std::cout << "Введите сумму расходов ";
        std::cin >> expenses;
        if (expenses > 0)
        {
            std::cout << "Расходы учтены " << "\n";
            balance = balance - expenses;

            //Изменения значения в дб
            sqlite3* db;
            sqlite3_stmt* stmt;
            int exit = sqlite3_open("zxc.db", &db);
            if (exit != SQLITE_OK) {
                std::cerr << "Ошибка при открытии базы данных: " << sqlite3_errmsg(db) << std::endl;
            }

            // Правильный SQL запрос
            std::string updateSQL = "UPDATE USERS SET balance = ? WHERE NUM = ?;";


            exit = sqlite3_prepare_v2(db, updateSQL.c_str(), -1, &stmt, nullptr);
            if (exit != SQLITE_OK) {
                std::cerr << "Ошибка при подготовке SQL запроса: " << sqlite3_errmsg(db) << std::endl;
            }
            else {
                // Привязываем значения к параметрам запроса
                sqlite3_bind_int(stmt, 1, balance);
                sqlite3_bind_int(stmt, 2, id);

                exit = sqlite3_step(stmt);
                if (exit == SQLITE_DONE) {
                    std::cout << "Row with id = " << id << " updated successfully." << std::endl;
                }
                else {
                    std::cerr << "Failed to update row: " << sqlite3_errmsg(db) << std::endl;
                }
            }
        }
        else
        {
            std::cout << "Введено некоректное число" << "\n";
        }
    }

    void Afterogin() {
        int x = 0; int y = 0;
        std::cout << "Приветствуем вас! " << "\n";
        while (y == 0)
        {
            std::cout << "Что вы хотите сделать? 1-Узнать расходы 2-Узнать доходы 3-Добавить расходы 4-Добавить доходы 5-Узнать баланс 6-Выход из приложения" << "\n";
            std::cin >> x;
            switch (x)
            {
            case 3: Losemoney();
                break;
            case 4: Addmoney();
                break;
            case 1: std::cout << "Ваши расходы - " << Knowexpenses() << "\n";
                break;
            case 2: std::cout << "Ваши доходы - " << Knowincome() << "\n";
                break;
            case 5: std::cout << "Ваш баланс - " << Knowbalance() << "\n";
                break;
            case 6: y = 1;
                break;
            default:  std::cout << "Выберите корректный вариант ответа";
                break;
            }
        }
    }
};



int main()
{
    setlocale(LC_ALL, "RU");
    Data userdata; Balance balance;
     userdata.Beforelogin();
     if (userdata.Logged())
     {
     balance.SetID(userdata.GetID());
     balance.SetBalance(userdata.GetBalance());
     balance.Afterogin();
     }


    return 0;
}