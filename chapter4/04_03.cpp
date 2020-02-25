/* 04_03.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 4, страница 202, упражнение 3

	Напишите программу, которая запрашивает у пользователя имя, фамилию, а затем конструирует, сохраняет и отображает третью строку, состоящую из 
	фамилии пользователя, за которой следует запятая, пробел и его имя. Используйте массивы char и функции из заголовочного файла cstring. Пример запуска
	должен выглядеть так:
	Enter your first name: Flip
	Enter your last name: Fleming
	Here's the information in a single string: Fleming, Flip
*/

#include <iostream>
#include <string>

int main()
{
	using namespace std;

	const int C_fn=20, C_ln=25;
	char fn[C_fn]; 
	char ln[C_ln];	
	
	cout << "\nEnter your first name: ";
	cin.getline(fn,C_fn);
	
	cout << "Enter your last name: ";
	cin.getline(ln,C_ln);
	
	cout << "Here's the information in a single string: " << ln << ", " << fn << endl;
	
	return (0);
}
