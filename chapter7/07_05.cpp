/* 07_05.cpp
	Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 7, страница 364, упражнение 5

    Определите рекурсивную функцию, принимающую целый аргумент и 
    возвращающую его факториал. Вспомните, что факториал 3 записывается, как 3! и
    вычисляется как 3x2! и т.д., причем 0! равно 1. В общем случае, если n больше
    нуля, то n!=n * (n-1)!. Протестируйте функцию в программе, использующей
    цикл, где пользователь может вводить различные значения, для которых 
    программа вычисляет и отображает факториалы.
*/

#include <iostream>
#include <climits>

long get_fact(long num);

int main()
{
    using namespace std;
    const short MaxNum = 23;
    short number=0;

    while (!cin.fail())
    {
        cout << "Enter whole number (max="<< MaxNum << "), q - for Exit: ";
        cin >> number;
        if (number <= MaxNum)
        {
            cout << number << "! = " << get_fact(number) << endl;
        }
        else
        {
            cout << "ERROR! Entered number - " << number << " > " << MaxNum << "(max), retry input." << endl;
        }
    }
    return 0;
}


long get_fact(long num)
{
    long res;

    if (num > 1)
    {
        res = num * get_fact(num-1);
    }
    else
    {
        res = 1;
    }
    
    return res;
} // long get_fact(long num)