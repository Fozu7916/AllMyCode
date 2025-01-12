#include "Data.h"
#include <iostream>

Data::Data() :  pas(""), user(""), Tpas("zxc"), Tuser("Fozu"), logged(false) {}

    std::string Data::Getpas() const { return Tpas; }
    std::string Data::Getuser() const { return Tuser; }
    bool  Data::Logged() const { return logged; }

    void Data::Setpas(std::string password) { pas = password; }
    void Data::Setuser(std::string username) { user = username; }
    void Data::Newuser(std::string username) { Tuser = username; }
    void Data::Newpas(std::string password) { Tpas = password; }

    void Data::Check()
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
    void Data::Registr()
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
    void Data::Login()
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
    void Data::Beforelogin()
    {
        int otvet = 0; std::string x; std::string y; 
        std::cout << "Добро пожаловать. Хотите создать новый аккаунт или у вас уже есть?(1-Войти  2-Зарегестрироваться)  ";
        std::cin >> otvet;
            switch (otvet)
            {
            case 1:
                Login();
                break;
            case 2:
                Registr();
                break;
            default:
                std::cout << "Выберите корректный вариант \n";
                break;
        }
    }
