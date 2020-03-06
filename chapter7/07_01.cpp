/* 07_01.cpp
	Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 7, страница 363, упражнение 1

    Напишите программу, которая многократно запрашивает у пользователя пару
    чисел до тех пор, пока хотя бы одно из этой пары не будет равно 0. С 
    каждой парой программа должна использовать функцию для вычисления среднего
    гармонического этих чисел. Функция должна возвращать ответ main () для 
    отображения результата. Среднее гармоническое чисел — это инверсия среднего
    значения их инверсий; она вычисляется следующим образом:
    среднее гармоническое = 2.0 * х * у / (х + у)
*/

#include <iostream>
#include <string>

double f_enter(std::string txt);
double f_mid (long n1, long n2);

// ===== MAIN =====
int main(){

    using namespace std; 
    double n1;
    double n2;
    bool bentering = true;

    while (bentering) 
    {
        n1 = f_enter("Number1");
        if (n1 == 0) 
        {
            cout << "n1 = 0. Stop." << endl;
            bentering = false;
            break;
        }
        
        n2 = f_enter("Number2");
        if (n2 == 0) 
        {
            cout << "n2 = 0. Stop." << endl;
            bentering = false;
            break;
        }

        cout << "==============="  << endl ;
        cout << "n1=" << n1 << endl; 
        cout << "n2=" << n2 << endl; 
        cout << "Result: " << f_mid (n1, n2) << endl;
    }

    cout << "Finish. Bye!";

    return 0;
}

double f_enter(std::string txt)
{
    using namespace std;
    double res;

    cout << "Enter " << txt << ": ";
    cin >> res;
    while (cin.fail())
    {
        while (cin.get()!='\n')
        cin.clear();
        cout << "Error. Enter number for " << txt << ": " ;
        cin >> res;
    }
    return res;
}


double f_mid (long n1, long n2) 
{
    double res = 2.0*n1*n2/(n1+n2);
    return res;
}