/* 06_03.cpp
	Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 6, страница 300, упражнение 3

    Напишите предшественник программы, управляемой меню. Она должна
    отображать меню из четырех пунктов, каждый из них помечен буквой. Если
    пользователь вводит букву, отличающуюся от четырех допустимых, программа
    должна повторно приглашать его ввести правильное значение до тех пор, пока
    он этого не сделает. Затем она должна выполнить некоторое простое действие
    на основе пользовательского выбора. Работа программы должна выглядеть 
    примерно так:
    Please enter one of the following choices:
    c) carnivore p) pianist
    t) tree g) game
    f
    Please enter a c, p, t, or g: q
    Please enter a c, p, t, or g: t
    A maple is a tree.
*/

#include <iostream>
void showmenu();

int main(){
    using namespace std;

    showmenu();
    
    char ch;
    cin.get(ch);

    while (ch != 'q')
    {
        switch (ch)
        {
            case 'c':
                cout << "Your choise is - carnivore." << endl;
                showmenu();
                break;
            case 'p':
                cout << "Your choise is - pianist." << endl;
                showmenu();
                break;
            case 't':
                cout << "Your choise is - tree." << endl;
                showmenu();
                break;
            case 'g':
                cout << "Your choise is - game." << endl;
                showmenu();
                break;
            case '\n':
                break;
            case 'q':
                cout << "Your choise is - Quit" << endl;
                return 0;

            default:
                cout << "Please enter a c, p, t, g or q (to exit): " ;
                break;
        }
        cin.get(ch);
    }
    return 0;
}

void showmenu(){
    using namespace std;

    cout << "Please enter one of the following choices:" << endl;
    cout << "c) carnivore" << endl; 
    cout << "p) pianist" << endl;
    cout << "t) tree" << endl; 
    cout << "g) game" << endl;
    cout << "q) Quit" << endl;
}