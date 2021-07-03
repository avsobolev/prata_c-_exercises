// 10_03_golf.cpp

#include <iostream>
#include <cstring>
#include "10_03_golf.h"


Golf::Golf(const char * name, int he){
    handicap_ = he;
    strcpy(fullname_, name);
} // Golf::Golf(const char * name, int he)


int Golf::setgolf(){
    using namespace std;
    char Name[Len];
    int HandicapNew = 0;
    int res = 0;

    char n;
    
    cout << "Enter player Name: ";

    cin.get(Name, Len);
    if (cin) {
        res = 1;
        cin.get(n);
        while (n != '\n') // строка не помещается;
            cin.get(n);
        
        cout << "Enter player Handicap: ";
        cin >> HandicapNew;
        cin.get();
        
        *this = Golf(Name, HandicapNew);
    }
    return res;
} // int setgolf(golf & g) ;


// Функция устанавливает новое значение гандикапа
void Golf::sethandicap(int he){
    handicap_ = he;
} // void Golf::handicap(int he)


// Функция отображает содержимое структуры типа golf
void Golf::showgolf() const {
    std::cout << "fullname = " << fullname_ << ", handicap = " << handicap_ << std::endl;
} // void Golf::showgolf() const