/* 07_02.cpp
	Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 7, страница 363, упражнение 2

    Напишите программу, которая запрашивает у пользователя 10 результатов игры
    в гольф, сохраняя их в массиве. При этом необходимо обеспечить возможность
    прекращения ввода до ввода всех 10 результатов. Программа должна отобразить
    все результаты в одной строке и сообщить их среднее значение. Реализуйте
    ввод, отображение и вычисление среднего в трех отдельных функциях, 
    работающих с массивами.
*/

#include <iostream>
#include <string>

int input_results(int p_arr[], int size);
void write_results(int p_arr[], int size, double average);
double get_average(int p_arr[], int size);

int main()
{
    using namespace std; 

    const int NumOfRes = 10;
    int arr_res[NumOfRes]={0};
    int size = 0;

    size = input_results(arr_res,NumOfRes);
    write_results(arr_res, size, get_average(arr_res, size));

    return 0;
} // main()



int input_results(int p_arr[], int size)
{
    using namespace std;
    int i;
    int res;
    string str;
    

    cout << "Input results." << endl;
    cout << "--------------" << endl;
    cout << "0-finish." << endl;

    for (i = 0; i < size; i++)
    {
        str = "Enter result №" + to_string(i+1) + ": ";
        cout << str;
        cin >> res;
        while (cin.fail())
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Input Error! Try again." << endl;
            cout << str;
            cin >> res;
        }
     
        if (res>0)
        {
            p_arr[i] = res;    
        }
        else
        {
            break;
        }
    } //for
    return i;
} // input_results()



void write_results(int p_arr[], int size, double average)
{
    using namespace std;

    string str = "";

    for (int i = 0; i < size; i++)
    {
        str = str + "Res №" + to_string(i+1) + "=" + to_string(p_arr[i]) + ", ";
    }

    str = str + "Average=" + to_string(average) + ". Total results: " + to_string(size) + ".";

    cout << str << endl;

} // write_results()


double get_average(int p_arr[], int size)
{
    double res = 0;
    
    if (size>0){
        for (int i=0; i < size; i++)
        {
            res+=p_arr[i];
        }
        res = res/size;
    }
    
    return res;
} // get_average()