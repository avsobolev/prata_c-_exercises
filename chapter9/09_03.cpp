/* 09_03.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 9, страница 480, упражнение 3

    Начните со следующего объявления структуры:
    struct chaff
    {
        char dross [20];
        int slag;
    );
    Напишите программу, которая использует операцию new с размещением, чтобы
    поместить массив из двух таких структур в буфер. Затем программа присваивает
    значения членам структуры (не забудьте воспользоваться функцией strcpy()
    для массива char) и отображает ее содержимое с помощью цикла. Вариант 1
    предусматривает применение в качестве буфера памяти статического массива,
    как было показано в листинге 9.10. Вариант 2 состоит в использовании обычной
    операции new для выделения памяти под буфер.
*/

#include <iostream>
#include <new>
#include <cstring>

const int Size = 20;

struct chaff
{
    char dross[Size];
    int slag;
};

const int SizeBUF = 2;
const int BUF = SizeBUF * sizeof(chaff);

char buf1[BUF];


int main(){
    // Variant 1
    chaff * pa1 = new (buf1) chaff [2];

    pa1[0].slag = 111;
    strcpy(pa1[0].dross, "Variant 1. El.-1");

    pa1[1].slag = 222;
    strcpy(pa1[1].dross, "Variant 1. El.-2");

    std::cout << "VARIANT 1.\n";
    for (int i = 0; i < 2; i++)
    {
        std::cout << "pa1[" << i << "].dross: " << pa1[i].dross << ", pa1 [" << i << "].slag: "<< pa1 [i].slag << ".\n";
    }

    // Variant 2
    chaff * pa2 = new chaff[2];

        pa2[0].slag = 333;
        strcpy(pa2[0].dross, "Variant 2. El.-1");

        pa2[1].slag = 444;
        strcpy(pa2[1].dross, "Variant 2. El.-2");

        std::cout << "\nVARIANT 2.\n";
        for (int i = 0; i < 2; i++)
        {
            std::cout << "pa2[" << i << "].dross: " << pa2[i].dross << ", pa2 [" << i << "].slag: "<< pa2 [i].slag << ".\n";
        }

    delete [] pa2;

    return 0;
} // int main()