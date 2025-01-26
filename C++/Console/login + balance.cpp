#include <iostream>


// система Войти/Зарегистрироваться
class Data
{
private:
       std::string pas = "";
       std::string user = "";
       std::string Tpas = "zxc";
       std::string Tuser = "Fozu";
       bool logged = false;
public:
    
    std::string Getpas() const { return Tpas; }
    std::string Getuser() const { return Tuser; }
    bool const Logged() const { return logged; }

    void Setpas(std::string password) { pas = password; }
    void Setuser(std::string username) { user = username; }
    void Newuser(std::string username) { Tuser = username; }
    void Newpas(std::string password) { Tpas = password; }

    void Check()
    {
        if (user == Tuser && pas == Tpas)
        {
            std::cout << "Вы вошли в аккаунт \n";
            logged = true;
        }
        else
        {
            std::cout << "Вы НЕ вошли в аккаунт \n"; Login();
        }

    }
    void Registr()
    {
        std::string password; std::string username;
        std::cout << "Логин - ";
        std::cin >> username;
        Newuser(username);
        std::cout << "Пароль - ";
        std::cin >> password;
        Newpas(password);
        std::cout << "Вы создали аккаунт \n";
        Login();

    }
    void Login()
    {
        std::string password; std::string username;
        std::cout << "Логин - ";
        std::cin >> username;
        Setuser(username);
        std::cout << "Пароль - ";
        std::cin >> password;
        Setpas(password);
        Check();
    }
    void Beforelogin()
    {
        int otvet = 0; std::string x; std::string y;int xw = 0;
        std::cout << "Добро пожаловать. Хотите создать новый аккаунт или у вас уже есть?(1-Войти  2-Зарегестрироваться)  ";
        std::cin >> otvet;
        while (xw == 0)
        {
            switch (otvet)
            {
            case 1:
                otvet = 1;
                Login();
                break;
            case 2:
                otvet = 1;
                Registr();
                break;
            default:
                std::cout << "Выберите корректный вариант \n";
                break;
            }
        }
    }
};

// система баланса пользователя

class Balance {
private:
    float income = 0; float expenses = 0; float balance = 10000; Data userdata;
public:
    int const Knowbalance() const { return balance; }
    int const Knowexpenses() const { return expenses; }
    int const Knowincome() const { return income; }

    void Addmoney() {
        std::cout << "Введите сумму доходов ";
        std::cin >> income;
        if(income > 0)
        { 
        std::cout << "Доходы пополнены " << "\n";
        balance = balance + income;
        }
        else
        {
            std::cout << "Введено некоректное число" << "\n";
        }
    }
    void Losemoney() {
        std::cout << "Введите сумму расходов ";
        std::cin >> expenses;
        if(expenses > 0)
        {
        std::cout << "Расходы учтены " << "\n";
        balance = balance - expenses;
        }
        else
        {
            std::cout << "Введено некоректное число" << "\n";
        }
    }

    void Afterogin() {
        int x = 0;int y =0;
        std::cout << "Приветствуем вас, " << userdata.Getuser() << "\n";
        while (y ==0 )
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
