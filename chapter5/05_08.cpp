/* 05_08.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 5, страница 256, упражнение 8

	Напишите программу, которая использует массив char и цикл для чтения по
	одному слову за раз до тех пор, пока не будет введено слово done. Затем 
	программа должна сообщить количество введенных слов (исключая done). Пример
	запуска должен быть таким:
	Вводите слова (для завершения введите слово done):
	anteater birthday category dumpste
	envy finagle geometry done for sure
	Вы ввели 7 слов 
	Вы должны включить заголовочный файл cstring и применять функцию
	strcmp () для выполнения проверки.
*/

#include <iostream>
#include <cstring>

int main()
{
	using namespace std;

	const int LenWord = 25;

	char word[LenWord];
	int NumWords = 0;

	cout << "Введите слово (done - конец ввода)" << endl;

	do
	{
		NumWords++;
		cout << "Слово №" << NumWords << ": ";
		cin >> word;
	} while (strcmp(word,"done"));
	cout << "-----------------" << endl;
	cout << "Вы ввели " << (NumWords-1) << " слов(а)." << endl;

	return 0;
}