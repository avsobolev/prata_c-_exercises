/* 10_01_main.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 10, страница 531, упражнение 1

    Предоставьте определения методов для класса, описанного в вопросе 5, и 
    напишите короткую программу для иллюстрации всех его возможностей.

    ВОПРОС 5:
    Определите класс для представления банковского счета. Данные-члены должны
    включать имя вкладчика, номер счета (используйте строку) и баланс. Функции-
    члены должны позволять следующее:
    • создание объекта и его инициализация;
    • отображение имени вкладчика, номера счета и баланса;
    • добавление на счет суммы денег, переданной в аргументе;
    • снятие суммы денег, переданной в аргументе.
    Просто приведите объявление класса без реализации методов. (Возможность 
    написать реализацию будет представлена в упражнении 1.)
*/
#include <iostream>
#include "10_01_bank.h"

int main(){
    std::cout << "Hello!" << std::endl;
    
    BankAccount Acc0 = {"Petrov P. P.", "00000111112222233333", -100.0};
    Acc0.ShowBalance();
    std::cout << "--------------"<< std::endl << std::endl;
    
    BankAccount Acc1 = {"Sidorov S. S.", "4444444444444444444"};
    Acc1.ShowBalance();
    std::cout << std::endl;

    Acc1.PutMoney(-111.11);
    Acc1.ShowBalance();
    std::cout << std::endl;

    Acc1.PutMoney(111.11);
    Acc1.ShowBalance();
    std::cout << std::endl;
    
    Acc1.GetMoney(200);
    Acc1.ShowBalance();
    std::cout << std::endl;
    
    Acc1.GetMoney(-100);
    Acc1.ShowBalance();
    std::cout << std::endl;
    
    Acc1.GetMoney(100);
    Acc1.ShowBalance();
    std::cout << std::endl;
    
    Acc1.PutMoney(222.22);
    Acc1.ShowBalance();
    std::cout << std::endl;

    std::cout << "Bye!" << std::endl;
    return 0;
} // int main()