/* 04_02.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 4, страница 202, упражнение 2

	Перепишите листинг 4.4, применив класс C++ string вместо массивов char.

	Листинг 4.4. insrt2 . срр
	// insrt2.cpp -- чтение более одного слова с помощью getline
	#include <iostream>
	int main()
	{
		using namespace std;
		const int ArSize = 20;
		char name[ArSize];
		char dessert[ArSize];
		cout « "Enter your name:\n";
		cin.getline(name, ArSize);
		cout « "Enter your favorite dessert:\n";
		cin.getline(dessert, ArSize);
		cout « "I have some delicious " « dessert;
		cout « " for you, " << name « " .\n";
		return 0; 
	}
*/

#include <iostream>
#include <string>

int main()
{
	using namespace std;

	const int ArSize = 20;
	string name;
	string dessert;
	cout << "Enter your name:\n";
	getline(cin, name);
	cout << "Enter your favorite dessert:\n";
	getline(cin, dessert);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";

	return 0;
}

