/* 06_04.cpp
	Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 6, страница 300, упражнение 4

    Когда вы вступите в Благотворительный Орден Программистов (БОП), к вам
    могут обращаться на заседаниях БОП по вашему реальному имени, по 
    должности либо секретному имени БОП. Напишите программу, которая может 
    выводить списки членов по реальным именам, должностям, секретным именам либо
    по предпочтению самого члена. В основу положите следующую структуру:
    // Структура имен Благотворительного Ордена Программистов (БОП)
    struct bop {
        char fullname[strsize]; // реальное имя
        char title[strsize]; // должность
        char bopname[strsize]; // секретное имя БОП
        int preference; // 0 = полное имя, 1 = титул, 2 = имя БОП
    };
    В этой программе создайте небольшой массив таких структур и 
    инициализируйте его соответствующими значениями. Пусть программа запустит цикл, 
    который даст возможность пользователю выбирать разные альтернативы:
    a. display by name b. display by title
    c. display by bopname d. display by preference
    q. quit
    Обратите внимание, что "display by preference" (отображать по предпочтениям)
    не означает, что нужно отобразить член preference; это значит, что 
    необходимо отобразить член структуры, который соответствует значению preference.
    Например, если preference равно 1, то выбор d должен вызвать отображение
    должности данного программиста. Пример запуска этой программы может 
    выглядеть следующим образом:Benevolent Order of Programmers Report
    a. display by name b. display by title
    c. display by bopname d. display by preference
    q. quit
    Enter your choice: a
    Wimp Macho
    Raki Rhodes
    Celia Laiter
    Hoppy Hipman
    Pat Hand
    Next choice: d
    Wimp Macho
    Junior Programmer
    MIPS
    Analyst Trainee
    LOOPY
    Next choice: q
    Bye!
*/

#include <iostream>
void showmenu();

int main(){
    using namespace std;
    const int size_bop = 5;
    const int strsize = 20;
    struct bop {
        char fullname[strsize]; // реальное имя
        char title[strsize]; // должность
        char bopname[strsize]; // секретное имя БОП
        int preference; // 0 = полное имя, 1 = титул, 2 = имя БОП
    };

    bop arr_bop[size_bop] = {
        {"Wimp Macho", "Boss", "BB", 0},
        {"Raki Rhodes", "Junior Programmer", "RR", 2},
        {"Celia Laiter", "Marketing", "CL", 1},
        {"Hoppy Hipman", "HR", "HH", 1},
        {"Pat Hand", "Programmer", "PH", 2},
    };

    cout << "Benevolent Order of Programmers Report" << endl;
    showmenu();
    cout << "Enter choice: ";
    
    char chr;
    cin.get(chr);
    
    while (chr != 'q')
    {
        switch (chr)
        {
        case 'a' :
            for (int i = 0; i <= size_bop-1; i++) {
                cout << arr_bop[i].fullname  << endl;
            }
            break;
        
        case 'b' :
            for (int i = 0; i <= size_bop-1; i++) {
                cout << arr_bop[i].title  << endl;
            }

            break;
        
        case 'c' :
            for (int i = 0; i <= size_bop-1; i++) {
                cout << arr_bop[i].bopname  << endl;
            }

            break;
        
        case 'd' :
            for (int i = 0; i <= size_bop-1; i++) {
                if (arr_bop[i].preference == 0)
                {
                    cout << arr_bop[i].fullname  << endl;
                }
                else if (arr_bop[i].preference == 1)
                {
                    cout << arr_bop[i].title  << endl;
                }
                else 
                {
                    cout << arr_bop[i].bopname  << endl;
                }
            }

            break;                        

        default:
            if  (chr != '\n') {
                while (chr != '\n')
                {
                    cin.get(chr);
                }
                cout << "incorrect input, try again choise: ";
            }
            else
            {
                cout << "Next choice: ";
            }
            
            break;
        }

        cin.get(chr);
    }

    cout << "Bye!" << endl << endl;
    return 0;
}


void showmenu(){
    using namespace std;

    cout << "a. display by name b. display by title" << endl;
    cout << "c. display by bopname d. display by preference" << endl;
    cout << "q. quit" << endl;
}