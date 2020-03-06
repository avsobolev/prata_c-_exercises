/* 07_07.cpp
	Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 7, страница 365, упражнение 7

    Вернитесь к программе из листинга 7.7 и замените три функции обработки 
    массивов версиями, которые работают с диапазонами значений, заданными парой
    указателей. Функция fill_array () вместо возврата действительного 
    количества прочитанных значений должна возвращать указатель на место, следующее за
    последним введенным элементом; прочие функции должны использовать его в
    качестве второго аргумента для идентификации конца диапазона данных.

    ЛИСТИНГ 7.7
    // arrfun3.cpp -- array functions and const
    #include <iostream>
    const int Max = 5;

    // function prototypes
    int fill_array(double ar[], int limit);
    void show_array(const double ar[], int n);  // don't change data
    void revalue(double r, double ar[], int n);

    int main()
    {
        using namespace std;
        double properties[Max];

        int size = fill_array(properties, Max);
        show_array(properties, size);
        if (size > 0)
        {
            cout << "Enter revaluation factor: ";
            double factor;
            while (!(cin >> factor))    // bad input
            {
                cin.clear();
                while (cin.get() != '\n')
                    continue;
            cout << "Bad input; Please enter a number: ";
            }
            revalue(factor, properties, size);
            show_array(properties, size);
        }
        cout << "Done.\n";
        // cin.get();
        // cin.get();
        return 0;
    }

    int fill_array(double ar[], int limit)
    {
        using namespace std;
        double temp;
        int i;
        for (i = 0; i < limit; i++)
        {
            cout << "Enter value #" << (i + 1) << ": ";
            cin >> temp;
            if (!cin)    // bad input
            {
                cin.clear();
                while (cin.get() != '\n')
                    continue;
            cout << "Bad input; input process terminated.\n";
            break;
            }
            else if (temp < 0)     // signal to terminate
                break;
            ar[i] = temp;
        }
        return i;
    }

    // the following function can use, but not alter,
    // the array whose address is ar
    void show_array(const double ar[], int n)
    {
        using namespace std;
        for (int i = 0; i < n; i++)
        {
            cout << "Property #" << (i + 1) << ": $";
            cout << ar[i] << endl;
        }
    }

    // multiplies each element of ar[] by r
    void revalue(double r, double ar[], int n)
    {
        for (int i = 0; i < n; i++)
            ar[i] *= r;
    }
*/

#include <iostream>

const int Max = 5;

// function prototypes
double * fill_array(double * ar_beg, double * ar_end);
void show_array (double * ar_beg, double * ar_end);
void revalue (double r, double * ar_beg, double * ar_end);

int main()
{
    using namespace std;
    double properties[Max];
    
    double * p_end = fill_array(properties, properties+Max);
    
    // cout << "properties = " << properties << endl;
    // cout << "p_end = " << p_end << endl;
    
    show_array(properties, p_end);

        
    if (p_end > properties)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, p_end);
        show_array(properties, p_end);
    }
    cout << "Done.\n";
    // cin.get();
    // cin.get();
    return 0;
}

double * fill_array(double * ar_beg, double * ar_end)
{
    using namespace std;
    
    double * i;
    double temp;
    int j=0;
    
    for (i = ar_beg; i < ar_end; i++)
    {
        cout << "Enter value #" << (j + 1) << ": ";
        cin >> temp;

        if (!cin)    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Bad input; input process terminated.\n";
           break;
        }
        else if (temp < 0)     // signal to terminate
            break;
        *i = temp;
        j++;
    }

    return i;
} // double * fill_array(double * ar_beg, double * ar_end)



void show_array (double * ar_beg, double * ar_end)
{
    using namespace std;
    int j = 0;
    for (double * i = ar_beg; i < ar_end; i++)
    {

        cout << "Property #" << (j + 1) << ": $";
        cout << *i << endl;
    }
} // void show_array (double * ar_beg, double * arr_end)



void revalue (double r, double * ar_beg, double * ar_end)
{
    for (double * i = ar_beg; i < ar_end; i++)
        *i *= r;
} // void revalue (double r, double * ar_beg, double * ar_end)