/* 07_03.cpp
	Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 7, страница 364, упражнение 3

    Пусть имеется следующее объявление структуры:
    struct box
    {
        char maker[40];
        float height;
        float width;
        float length;
        float volume;
    };
    а. Напишите функцию, принимающую структуру box по значению и 
    отображающую все ее члены.
    б. Напишите функцию, принимающую адрес структуры box и устанавливающую
    значение члена volume равным произведению остальных трех членов.
    в. Напишите простую программу, которая использует эти две функции.
*/

#include <iostream>
#include<cstring>

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void write_struct(box my_srtuct);
void change_struct(box *my_struct);

int main () 
{
    using namespace std;

    box strct;
    strcpy(strct.maker, "String");
    strct.height = 2;
    strct.width = 3;
    strct.length = 4;
    strct.volume = 6;


    write_struct(strct);
    
    change_struct(&strct);
    
    write_struct(strct);


    return 0;
} // main ()


void write_struct(box my_struct)
{
    using namespace std;
    cout << "maker: " << my_struct.maker << endl; 
    cout << "height: " << my_struct.height << endl; 
    cout << "width: " << my_struct.width << endl; 
    cout << "length: " << my_struct.length << endl; 
    cout << "volume: " << my_struct.volume << endl; 

} // write_struct


void change_struct(box *my_struct)
{
    my_struct->volume = my_struct->height * my_struct->width * my_struct->length;

} // change_struct()