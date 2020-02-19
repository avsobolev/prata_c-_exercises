/* 02_05.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 2, страница 84, упражнение 5
	
	Напишите программу, в которой функция main() вызывает определяемую
	пользователем функцию, принимающую в качестве аргумента значение 
	температуры по Цельсию и возвращающую эквивалентное значение температуры по
	Фаренгейту. Программа должна выдать запрос на ввод значения по Цельсию и
	отобразить следующий результат:
	Please enter a Celsius value: 20
	20 degrees Celsius is 68 degrees Fahrenheit.
	Вот формула для этого преобразования:
		Температура в градусах по Фаренгейту =
		1,8 * Температура в градусах по Цельсию + 32
*/

#include <iostream>

double my_tofrng(int my_cls);

int main()
{
	using namespace std;
	int my_cls = 0;
	cout << "Please enter a Celsius value: ";
	cin >> my_cls;
	
	cout << my_cls << " degrees Celsius is " << my_tofrng(my_cls) << " degrees Fahrenheit." << endl;

	return 0;
}


double my_tofrng(int my_cls)
{
	double my_frng;
	my_frng = my_cls * 1.8 + 32;
	
	return my_frng;
}

