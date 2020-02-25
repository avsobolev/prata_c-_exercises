/* 04_04.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 4, страница 202, упражнение 4

	Напишите программу, которая приглашает пользователя ввести его имя и 
	фамилию, а затем построит, сохранит и отобразит третью строку, состоящую
	из фамилии, за которой следует запятая, пробел и имя. Используйте объекты
	string и методы из заголовочного файла string. Пример запуска должен 
	выглядеть так:
	Enter your first name: Flip
	Enter your last name: Fleming
	Here's the information in a single string: Fleming, Flip
*/

#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string fn,ln, fullname;
	cout << "\nEnter your first name: ";
	getline(cin,fn);
	cout << "Enter your last name: ";
	getline(cin,ln);
	
	fullname = "Here's the information in a single string: " + ln + ", " + fn; 
	
	cout << fullname << endl;
	
	return (0);
}
