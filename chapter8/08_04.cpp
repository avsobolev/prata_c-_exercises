/* 08_04.cpp
	Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 8, страница 427, упражнение 4

    Ниже представлена общая структура программы:
    #include <iostream>
    using namespace std;
    #include <cstring> // для strlen(), strcpyO

    st stringy {
        char * str; // указывает на строку
        int ct; // длина строки (не считая символа '\0')
    }; 
    // Здесь размещаются прототипы функций set() и show()
    int main ()
    {
        stringy beany;
        char testing [] = "Reality isn't what it used to be.";
        set(beany, testing); // первым аргументом является ссылка,
        // Выделяет пространство для хранения копии testing,
        // использует элемент типа str структуры beany как указатель
        // на новый блок, копирует testing в новый блок и
        // создает элемент ct структуры beany
        show(beany); // выводит строковый член структуры один раз
        show (beany, 2); // выводит строковый член структуры два раза
        testing[0] = 'D';
        testing[1] = ' u';
        show(testing); // выводит сроку testing один раз
        show(testing, 3); // выводит строку testing три раза
        show("Done!");
        return 0;
    }
    Завершите программу, создав соответствующие функции и прототипы. Обратите
    внимание, что в программе должны быть две функции show (), и каждая из
    них использует аргументы по умолчанию. Где необходимо, используйте const.
    Функция set () должна использовать операцию new для выделения 
    достаточного пространства памяти под хранение заданной строки. Используемые здесь
    методы аналогичны методам, применяемым при проектировании и реализации
    классов. (В зависимости от используемого компилятора, может понадобиться 
    изменить имена заголовочных файлов и удалить директиву using.)
*/

#include <iostream>
#include <cstring> // для strlen(), strcpy()

using namespace std;

struct stringy {
    char * str; // указывает на строку
    int ct; // длина строки (не считая символа '\0')
}; 

// Здесь размещаются прототипы функций set() и show()
void show(const stringy & s, int r=1);
void show(const char * p, int r=1);
void set(stringy & s, const char * pstr);

int main ()
{
    stringy beany;
    char testing [] = "Reality isn't what it used to be.";
    set(beany, testing); // первым аргументом является ссылка,
    // Выделяет пространство для хранения копии testing,
    // использует элемент типа str структуры beany как указатель
    // на новый блок, копирует testing в новый блок и
    // создает элемент ct структуры beany
    show(beany); // выводит строковый член структуры один раз
    show(beany, 2); // выводит строковый член структуры два раза

    testing[0] = 'D';
    testing[1] = ' u';
    show(testing); // выводит сроку testing один раз
    show(testing, 3); // выводит строку testing три раза
    show("Done!");
 
    delete [] beany.str;
    return 0;
}


void set(stringy & s, const char * pstr){
    s.ct = strlen(pstr) + 1;
    if (s.ct > 1){
        char * pns = new char [s.ct];
        s.str = pns;
        strcpy(pns, pstr);
    }
} // set()


void show(const stringy & s, int r){
    r=(r>0)?r:1;
    for (int i=1; i<=r; i++){
        cout << s.str << " (" << s.ct << ")\n";
    }
    
} // show(const stringy & s, int r)


void show(const char * p, int r) {
    r=(r>0)?r:1;
    for (int i=1; i<=r; i++){
        cout << p << "\n";
    }
}  // show(const char * p, int r)