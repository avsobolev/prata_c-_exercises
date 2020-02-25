/* 04_10.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 4, страница 203, упражнение 10

	Напишите программу, которая приглашает пользователя ввести три 
	результата забега на 40 ярдов (или 40 метров, если желаете) и затем отображает эти
	значения и их среднее. Для хранения данных применяйте объект array. (Если
	объект array не доступен, воспользуйтесь встроенным массивом.)
*/

#include <iostream>
#include <array>

int main()
{
	using namespace std;
	const int Ci = 3;	
	
	array <float,Ci> res;	
	
	cout << "\nEnter " << Ci << " result cross at 40 meters." << endl;
	cout << "Enter result №1: ";
	cin >> res[0];
	cout << "Enter result №2: ";
	cin >> res[1];
	cout << "Enter result №3: ";
	cin >> res[2];

	float m = (res[0]+res[1]+res[2])/Ci;

	cout << "\n------------" << endl;
	cout << "Result 1 = " << res[0] << "; Result 2 = " << res[1] << "; Result 3 = " << res[2] << "." << endl;
	cout << "m = " << m << endl;
	cout << "==============" << endl; 	

	return 0; 
}