/* 07_06.cpp
	Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 7, страница 364, упражнение 6

    Напишите программу, использующую описанные ниже функции.
    Fill_array ()   принимает в качестве аргумента имя массива элементов типа
                    double и размер этого массива. Она приглашает 
                    пользователя ввести значения double для помещения их в массив. Ввод
                    прекращается при наполнении массива либо когда 
                    пользователь вводит нечисловое значение и возвращает 
                    действительное количество элементов.
    Show_array ()   принимает в качестве аргументов имя массива значений double,
                    а также его размер, и отображает содержимое массива.
    Reverse_array () принимает в качестве аргумента имя массива значений
                    double, а также его размер, и изменяет порядок его 
                    элементов на противоположный.
    Программа должна использовать эти функции для наполнения массива, 
    обращения порядка его элементов, кроме первого и последнего, с последующим
    отображением.
*/

#include <iostream>

void Show_array (const double arr[], int size);
int Fill_array (double arr[], int size);
void Revers_array(double arr[], int size);

int main()
{
    using namespace std;
    const int ArrSize = 10;
    int real_size = 0;

    double a[ArrSize] = {0};

    Show_array(a, ArrSize);
    real_size = Fill_array(a, ArrSize);

    cout << "Real array size: " << real_size << endl;
    Show_array(a, real_size);

    cout << "Revers array ---------" << endl;
    Revers_array(&a[1], real_size-2);
    Show_array(a, real_size);

    return 0;
}


void Show_array (const double arr[], int size)
{
    if (size > 0)
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << "arr[" << i << "]=" << arr[i] << std::endl;
        }
        
    }
} // void Show_array (double arr[], int size)


int Fill_array (double arr[], int size)
{
    using namespace std;
    
    int fact_size = 0;

    cout << "Fill array, type: double, size: " << size << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "]=";
        cin >> arr[i];
        if (cin.fail())
        {
            break;
        }
        else
        {
            fact_size++;
        }
    }
    
    return fact_size;
} // int Fill_array (double arr[], int size)


void Revers_array(double arr[], int size)
{
    using namespace std;
    
    if (size > 1)
    {
        double my_tmp = 0;

        for (int i = 0; i < size/2; i++)
        {
            my_tmp = arr[i]; 
            arr[i] = arr[size-1-i];
            arr[size-1-i] = my_tmp;
        }
    }
    else
    {
        cout << "No revers. Array size=" << size << " < 2." << endl;
    }
} // void Revers_array(double arr[], int size)