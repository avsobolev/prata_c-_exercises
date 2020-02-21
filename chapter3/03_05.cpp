/* 03_05.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 3, страница 130, упражнение 5

	Напишите программу, которая запрашивает текущую численность населения
	Земли и текущую численность населения США (или любой другой страны).
	Сохраните эту информацию в переменных типа long long. В качестве 
	результата программа должна отображать процентное соотношение численности
	населения США (или выбранной страны) и всего мира. Результат выполнения
	программы должен выглядеть следующим образом:
	Enter the world's population: 6898758899
	Enter the population of the US: 310783781
	The population of the US is 4.50492% of the world population.
*/

#include <iostream>

int main()
{
	using namespace std;
	long p_w, p_c; 
	float per;

	cout << "\nEnter the world's population: ";
	cin >> p_w;
	cout << "Enter the population of the US: ";
	cin >> p_c;
	
	per= p_c*100.0/p_w;
	cout << "The population of the US is " << per << "% of the world population." << endl;
	
	return 0;
}