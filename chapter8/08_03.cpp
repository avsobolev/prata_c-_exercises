/* 08_03.cpp
	Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 8, страница 426, упражнение 3

    Напишите функцию, которая принимает ссылку на объект string в качестве
    параметра и преобразует содержимое string в символы верхнего регистра.
    Используйте функцию toupper (), описанную в табл. 6.4 (см. главу 6). Напишите
    программу, использующую цикл, которая позволяет проверить работу функции
    для разного ввода. Пример вывода может выглядеть следующим образом:
    Enter a string (q to quit) : go away
    GO AWAY
    Next string (q to quit) : good grief!
    GOOD GRIEF!
    Next string (q to quit) : q
    Bye.
*/

#include <iostream>
#include <string>
#include <cctype>

void StrToUPCase(std::string & str);

int main() {
    using namespace std;
    
    string srcstr = "";
    
    while (srcstr != "q") {
        cout << "Enter a string (q to quit) : ";
        cin >> srcstr;
        if (srcstr != "q") {
            StrToUPCase(srcstr);
            cout << srcstr << endl;
        }
        else {
            cout << "Bye! \n";
        }
    }
} // main()


void StrToUPCase(std::string & str){
    using namespace std;

    for (int i=0; (i<str.size() && str[i]!='\n'); i++){
        str[i] = toupper(str[i]);
    }
} // StrToUPCase()