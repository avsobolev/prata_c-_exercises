/* 03_02.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 3, страница 129, упражнение 2

	Напишите короткую программу, которая запрашивает рост в футах и дюймах и
	вес в фунтах. (Для хранения этой информации используйте три переменных.)
	Программа должна выдать индекс массы тела (body mass index — ВМІ). Чтобы
	рассчитать ВМІ, сначала преобразуйте рост в футах и дюймах в рост в дюймах
	(1 фут =12 дюймов). Затем преобразуйте рост в дюймах в рост в метрах, 
	умножив на 0.0254. Далее преобразуйте вес в фунтах в массу в килограммах, 
	разделив на 2.2. После этого рассчитайте ВМІ, разделив массу в килограммах на
	квадрат роста в метрах. Для представления различных коэффициентов 
	преобразования используйте символические константы.
*/

#include <iostream>

int main()
{
	using namespace std;
	const int C_inch = 12;
	const float C_met = 0.0254;
	const float C_kg = 2.2;

	int hight_ft;
	int hight_inch;
	int weight_pound;
	float weight_kg;
	float hight_m;
	double mass_index;

	cout << "\nEnter your hight in ft. and inch.";
	cout << "\nEnter ft.: " ;
	cin >> hight_ft;
	cout <<"Enter inch: ";
	cin >> hight_inch;
	cout << "Enter your weight: ";
	cin >> weight_pound;
	
	cout << "Your hight: " << hight_ft << "ft. " << hight_inch << "inch. ";
	cout << "Yor weight: " << weight_pound << "pound." << endl;

	weight_kg = weight_pound/C_kg;
	hight_m = (hight_ft*C_inch + hight_inch)*C_met;
	mass_index = weight_kg/(hight_m*hight_m);
 
	cout << "or ..." << endl;
	cout << "Your hight: " << hight_m << " meters. ";
	cout << "Yor weight: " << weight_kg << " kg." << endl;
	
	cout << "Your body mass index is: " << mass_index << endl;

	return 0;
}

