/* 04_09.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 4, страница 203, упражнение 9
	
	Выполните упражнение 6, но вместо объявления массива из трех структур
	CandyBar используйте операцию new для динамического размещения массива.

	Упражнение №6.
	Структура CandyBar включает три члена, как описано в предыдущем 
	упражнении. Напишите программу, которая создает массив из трех структур CandyBar,
	инициализирует их значениями по вашему усмотрению и затем отображает 
	содержимое каждой структуры.
*/

#include <iostream>
#include <string>

int main()
{
	using namespace std;

	struct CandyBar {
		string name;
		float weight;
		int kk;
	};
	
	CandyBar * snack = new CandyBar[2];
	
	snack->name = "name1";
	snack->weight = 1.1;
	snack->kk = 11;
	
	(snack+1)->name = "name2";
	(snack+1)->weight = 2.2;
	(snack+1)->kk = 22;	

	cout << "SNACK1. Name: " << snack->name << "; weight: " << snack->weight << "; kk: " << snack->kk << "." << endl;
	cout << "SNACK2. Name: " << (snack+1)->name << "; weight: " << (snack+1)->weight << "; kk: " << (snack+1)->kk << "." << endl;

	delete [] snack;
		
	return (0);
}
