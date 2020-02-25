/* 04_01.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 4, страница 202, упражнение 1

	Напишите программу С++, которая запрашивает и отображает информацию,
	как показано в следующем примере:
	What is your first name? Bette Sue
	What is your last name? Yewe
	What letter grade do you deserve? B
	What is your age? 22
	Name: Yewe, Bette Sue
	Grade: C
	Age: 22 
*/

#include <iostream>
#include <string>

int main()
{
	using namespace std;

	cout << "\nWhat is your first name? ";
	string s_fn;
	getline(cin,s_fn);
	
	cout << "What is your second name? ";
	string s_sn;
	getline(cin,s_sn);
	
	cout << 	"What letter grade do you deserve? ";
	char grade;
	cin >> grade;
	grade = grade + 1;

	cout << "What is your age? ";
	int age;
	cin >> age;
	
	
	cout << "Name: " << s_sn << " " << s_fn << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age << endl;
		
	return (0);
}	