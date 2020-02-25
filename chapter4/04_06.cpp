/* 04_06.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 4, страница 202, упражнение 6

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

	CandyBar snack[3];
	
	snack[0].name = "name1";
	snack[1].name = "name2";
	snack[2].name = "name3";

	snack[0].weight = 1.1;
	snack[1].weight = 2.2;
	snack[2].weight = 3.3;
	
	snack[0].kk = 11;
	snack[1].kk = 22;
	snack[2].kk = 33;
	
	cout << "SNACK1. Name: " << snack[0].name << "; weight: " << snack[0].weight << "; kk: " << snack[0].kk << "." << endl;
	cout << "SNACK2. Name: " << snack[1].name << "; weight: " << snack[1].weight << "; kk: " << snack[1].kk << "." << endl;
	cout << "SNACK3. Name: " << snack[2].name << "; weight: " << snack[2].weight << "; kk: " << snack[2].kk << "." << endl << "-----" << endl;
	
	return (0);
}
