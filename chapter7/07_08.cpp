/* 07_08.cpp
	Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 7, страница 365, упражнение 8

    Вернитесь к программе из листинга 7.15, не использующей класс array. 
    Напишите следующие две версии.
        а. Используйте обычный массив из const char * для строковых представлений
            времен года и обычный массив из double для расходов.
        б. Используйте обычный массив из const char * для строковых 
            представлений времен года и структуру, единственный член которой является обычным
            массивом из double для расходов. (Это очень похоже на базовое проектное
            решение для класса array.)

    //arrobj.cpp -- functions with array objects
    #include <iostream>
    #include <array>
    #include <string>
    const int Seasons = 4;
    const std::array<std::string, Seasons> Snames =
        {"Spring", "Summer", "Fall", "Winter"};

    void fill(std::array<double, Seasons> * pa);
    void show(std::array<double, Seasons> da);
    int main()
    {
        std::array<double, 4> expenses;
        fill(&expenses);
        show(expenses);
        // std::cin.get();
        // std::cin.get();
        return 0;
    }

    void fill(std::array<double, Seasons> * pa)
    {
        for (int i = 0; i < Seasons; i++)
        {
            std::cout << "Enter " << Snames[i] << " expenses: ";
            std::cin >> (*pa)[i];
        }
    }

    void show(std::array<double, Seasons> da)
    {
        double total = 0.0;
        std::cout << "\nEXPENSES\n";
        for (int i = 0; i < Seasons; i++)
        {
            std::cout << Snames[i] << ": $" << da[i] << '\n';
            total += da[i];
        }
        std::cout << "Total: $" << total << '\n';
    }
 */

#include <iostream>

const int Seasons = 4;
const char * Snames [Seasons] = {"Spring", "Summer", "Fall", "Winter"};

void fill(double pa[]);
void show(double da[]);

int main()
{
    double expenses[Seasons];

    fill(expenses);
    show(expenses);
    return 0;
}


void fill(double pa[])
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> pa[i];
    }
}


void show(double da[])
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << ": $" << da[i] << '\n';
        total += da[i];
    }
    std::cout << "Total: $" << total << '\n';
}