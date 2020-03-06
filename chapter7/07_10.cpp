/* 07_10.cpp
	Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 7, страница 365, упражнение 10

    Спроектируйте функцию calculate(), которая принимает два значения типа
    double и указатель на функцию, принимающую два аргумента double и 
    возвращающую значение double. Функция calculate() также должна иметь тип
    double и возвращать значение, вычисленное функцией, которая задана 
    указателем, используя аргумент double функции calculate(). Например, 
    предположим, что имеется следующее определение функции add():
    double add(double x, double y)
    {
        return x + y;
    }
    Приведенный ниже вызов функции должен заставить calculate () передать
    значения 2.5 и 10.4 функции add () и вернуть ее результат (12.9):
    double q = calculate (2.5, 10.4, add);
    Используйте в программе эти функции и еще хотя бы одну дополнительную, 
    которая подобна add(). В программе должен быть организован цикл, 
    позволяющий пользователю вводить пары чисел. Для каждой пары calculate () должна
    вызвать add () и хотя бы еще одну функцию такого рода. Если вы чувствуете
    себя уверенно, попробуйте создать массив указателей на функции, подобные
    add (), и организуйте цикл, применяя calculate () для вызова этих функций
    по их указателям. Подсказка: вот как можно объявить массив из трех таких 
    указателей:
    double (*pf[3])(double, double);
    Инициализировать такой массив можно с помощью обычного синтаксиса 
    инициализации массивов и имен функций в качестве адресов.
*/

#include <iostream>

const int FCount = 3;

double add(double x, double y);
double mult(double x, double y); 
double dif(double x, double y); 
double calculate (double x, double y, double (*pf)(double, double));

int main()
{
    using namespace std;
    double x = 2.5;
    double y = 10.4;

    double (*pf[FCount])(double, double) = {add,mult,dif};

    while (x!=0 || y!=0) 
    {
        cout << "Enter two Numbers" << endl;
        cout << "=================" << endl;
        cout << "X: ";
        cin >> x;
        if (x==0 || cin.fail())
            break;

        cout << "Y: ";
        cin >> y;
        if (y==0 || cin.fail())
            break;

        cout << "\nRESULTS:" << endl;
        cout << "-------" << endl;
        cout << "sum(" << x << ", " << y << ", add) = " << calculate(x, y, add) << endl;
        cout << "mult(" << x << ", " << y << ", mult) = " << calculate(x, y, mult) << endl;
        cout << endl << endl;

        for (int i = 0; i < FCount; i++)
        {
            cout << "f[" << i << "] = " << calculate(x, y, pf[i]) << endl;    
        }
        
    }
    cout << "---------" << endl;
    cout << "Bye!" << endl;

    return 0;
} // int main()


double add(double x, double y)
{
    return x + y;
} // double add(double x, double y)


double mult(double x, double y)
{
    return x * y;
} // double mult(double x, double y)


double dif(double x, double y)
{
    return y - x;
} // double dif(double x, double y)


double calculate (double x, double y, double (*pf)(double, double))
{
    double res = pf(x,y);

    return res;
}