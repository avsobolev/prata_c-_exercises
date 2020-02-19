/* 02_04.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 2, страница 83, упражнение 4
	
	Напишите программу, которая предлагает пользователю ввести свой возраст.
	Затем программа должна отобразить возраст в месяцах:
	Enter your age: 29
	Your age in months is 348.
*/

#include <iostream>

int main() 
{
	using namespace std;

	int my_age;
	cout << "Enter your age: ";
	cin >> my_age;
	cout << "Your age in month is " << my_age*12 << "." << endl;

	return 0;
}
