/* 02_03.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 2, страница 83, упражнение 3

	Напишите программу на C++, которая использует три определяемых 
	пользователем функции (включая main ()) и генерирует следующий вывод:
	Three blind mice
	Three blind mice
	See how they run
	See how they run
	Одна функция, вызываемая два раза, должна генерировать первые две строки,
	а другая, также вызываемая два раза — оставшиеся строки.
*/

#include <iostream>

void my_func1 ();
void my_func2 (std::string my_str);

int main()
{
	my_func1();
	my_func1();
	my_func2("See how they run");
	my_func2("See how they run");

	return 0;
}

void my_func1 ()
{
	using namespace std;
	cout << "Three blind mice" << endl;
}


void my_func2 (std::string my_str)
{
        using namespace std;
        cout << my_str << endl;
}

