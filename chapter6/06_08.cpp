/* 06_08.cpp
	Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 6, страница 302, упражнение 8

    Напишите программу, которая открывает текстовый файл, читает его символ
    за символом до самого конца и сообщает количество символов в файле.
*/

#include <iostream>
#include <fstream>

int main(){
    using namespace std;
    ifstream inFile;
    inFile.open("06_08.txt");

    if (inFile.is_open())
    {
        int inumsym;
        char ch;
        while (inFile.get(ch) && !inFile.eof())
        {
            cout << ch;
            inumsym++;
        }

        cout << "\nTotal symbols in file: " << inumsym << endl;
    }
    else
    {
        cout << "Error opening file." << endl;
    }
    
 
    inFile.close();

    return 0;
}