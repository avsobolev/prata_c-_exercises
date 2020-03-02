/* 06_02.cpp
	Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 6, страница 300, упражнение 2

    Напишите программу, читающую в массив double до 10 значений 
    пожертвований. (Или, если хотите, используйте шаблонный объект array.) Программа
    должна прекращать ввод при получении нечисловой величины. Она должна
    выдавать среднее значение полученных чисел, а также количество значений в
    массиве, превышающих среднее.
*/

#include <iostream>

int main(){
    using namespace std;
    
    const int size_a = 10; 
    double arr[size_a] = {0};
    int i = 0;

    while (i < size_a)
    {
        cout << "Enter number " << i+1 << ": " ;

        if (!(cin >> arr[i])){
            cin.clear();
            while (cin.get() != '\n')
                continue;
            break;
        }
        i++;
    }

    double sum = 0;
    for (int j = 0; j<i ; j++)
    {
        sum = sum + arr[j];
    }

    float aver = 0;
    if  (i > 0) { 
        aver=sum / i;
    }

    int m_aver = 0;
    for (int j = 0; j<i ; j++)
    {
        if (arr[j]>aver)
        {
            m_aver++;
        }
    }

    cout << "Average = " << aver << endl;
    cout << "More average = " << m_aver << endl; 
    cout << "Total sum = " << sum << endl;
    cout << "Total numbers = " << i << endl;

    return 0;
}