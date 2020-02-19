/* 02_07.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 2, страница 84, упражнение 7

	Напишите программу, которая выдает запрос на ввод значений часов и минут.
	Функция main () должна передать эти два значения функции, имеющей тип
	void, которая отобразит эти два значения в следующем виде:
	Enter the number of hours: 9
	Enter the number of minutes: 28
	Time: 9:28
*/

#include <iostream>

void my_clock(int my_h, int my_m);

int main()
{
	using namespace std;
	int my_h, my_m;
	cout << "Enter the number of hours: ";
	cin >> my_h;
	cout << "Enter the number of minuts: ";
    cin >> my_m;
	
	my_clock(my_h,my_m);

	return 0;
}


void my_clock(int my_h, int my_m)
{
	std::cout << "Time: " << my_h << ":" << my_m << std::endl;
}

