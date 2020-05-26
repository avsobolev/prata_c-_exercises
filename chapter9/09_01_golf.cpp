// 09_01_golf.cpp

#include <iostream>
#include <cstring>
#include "09_01_golf.h"


void setgolf (golf & g, const char * name, int he) {
    g.handicap = he;
    strcpy(g.fullname, name);
} // void setgolf (golf & g, const char * name, int he) 


int setgolf(golf & g){
    using namespace std;
    char Name[Len];
    int Handicap = 0;
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
        cin >> Handicap;
        cin.get();

        strcpy(g.fullname, Name);
        g.handicap = Handicap;
    }
    return res;
} // int setgolf(golf & g) ;


// Функция устанавливает новое значение гандикапа
void handicap (golf & g, int he){
    g.handicap = he;
} // void handicap (golf & g, int he){


// Функция отображает содержимое структуры типа golf
void showgolf (const golf & g){
    std::cout << "g.fullname = " << g.fullname << ", g.handicap = " << g.handicap << std::endl;
} // void showgolf (const golf & g)