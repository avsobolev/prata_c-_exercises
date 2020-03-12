/* 08_02.cpp
	Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 8, страница 426, упражнение 2

    Структура CandyBar содержит три члена. Первый член хранит название коробки
    конфет. Второй — ее вес (который может иметь дробную часть), а третий — 
    количество калорий (целое значение). Напишите программу, использующую 
    функцию, которая принимает в качестве аргументов ссылку на CandyBar, указатель
    на char, значение double и значение int. Функция использует три последних
    значения для установки соответствующих членов структуры. Три последних 
    аргумента должны иметь значения по умолчанию: "Millennium Munch", 2.85 и 350.
    Кроме того, программа должна использовать функцию, которая принимает в 
    качестве аргумента ссылку на CandyBar и отображает содержимое этой структуры.
    Где необходимо, используйте const.
*/

#include <iostream>
#include <cstring>

const int SizeName = 50;

struct CandyBar
{
    char BoxName[SizeName];
    double BoxWeight;
    int calories;
};

void ChangDescBox (CandyBar & Box, char * pName="Millennium Munch", double Weight=2.85, int calories=350);
void PrintDescBox (const CandyBar & Box);

int main(){

    CandyBar Box1 ={"Box1", 1.11, 100};
    PrintDescBox(Box1);
    
    ChangDescBox(Box1);
    PrintDescBox(Box1);

    ChangDescBox(Box1, "ChangedBoxName", 2.22, 200);
    PrintDescBox(Box1);

    return 0;
} // main()



void ChangDescBox (CandyBar & Box, char * pName, double Weight, int calories) {
    using namespace std;

    strcpy(Box.BoxName, pName);
    Box.BoxWeight = Weight;
    Box.calories = calories;
} // ChangDescBox ()


void PrintDescBox (const CandyBar & Box) {
    using namespace std;

    cout << "Description Box." << endl; 
    cout << "Box Name: " << Box.BoxName << ", Weight: " << Box.BoxWeight << ", Calories: " << Box.calories << endl;
} // PrintDescBox ()