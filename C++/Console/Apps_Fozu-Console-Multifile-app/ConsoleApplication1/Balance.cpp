#include "Balance.h"
#include "Data.h"
#include <iostream>

Balance::Balance() : income(0), expenses(0), balance(10000.0) {}
  
    float Balance::Knowbalance() const { return balance; }
    float Balance::Knowexpenses() const { return expenses; }
    float Balance::Knowincome() const { return income; }

    void Balance::Addmoney() {
        std::cout << "Введите сумму доходов ";
        std::cin >> income;
        if (income > 0)
        {
            std::cout << "Доходы пополнены " << "\n";
            balance = balance + income;
        }
        else
        {
            std::cout << "Введено некоректное число" << "\n";
        }
    }
    void Balance::Losemoney() {
        std::cout << "Введите сумму расходов ";
        std::cin >> expenses;
        if (expenses > 0)
        {
            std::cout << "Расходы учтены " << "\n";
            balance = balance - expenses;
        }
        else
        {
            std::cout << "Введено некоректное число" << "\n";
        }
    }

    void Balance::AfterLogin() {
        int x = 0; int y = 0;
        std::cout << "Приветствуем вас, " <<  "\n";
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
