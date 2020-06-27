// 09_04_sales.cpp

#include <iostream>
#include "09_04_sales.h"

// Копирует меньшее значение из 4 или n элементов из массива
// аг в член sales структуры s, вычисляет и сохраняет
// среднее арифметическое, максимальное и минимальное
// значения введенных чисел;
// оставшиеся элементы sales, если таковые есть, устанавливаются в 0
void SALES::setSales (SALES::Sales & s, const double ar[], int n){
    using SALES::Sales;
    using SALES::QUARTERS;

    s.max = s.min = ar[0];
    s.average = 0;
    int count = 0;

    for (int i = 0; i < n && i < QUARTERS; i++)
    {
        s.sales[i] = ar[i];

        if (s.sales[i]<s.min) s.min = s.sales[i];
        if (s.sales[i]>s.max) s.max = s.sales[i];
        
        s.average += s.sales[i];
        count ++;
    }

    s.average = s.average / count;

    for (int i = count; i < QUARTERS; i++)
        s.sales[i] = 0;
} // void SALES::setSales (SALES::Sales & s, const double ar[], int n)


// Интерактивно подсчитывает продажи за 4 квартала,
// сохраняет их в члене sales структуры s, вычисляет и
// сохраняет среднее арифметическое, а также максимальное
// и минимальное значения введенных чисел
void SALES::setSales(SALES::Sales & s){
    using SALES::Sales;
    using SALES::QUARTERS;
    
    using std::cout;
    using std::cin;

    s.average = 0;

    for (int i = 0; i < QUARTERS; i++)
    {
        cout << "Enter sales in " << i+1 << " quarter: ";
        cin >> s.sales[i];
    }
    
    s.min = s.max = s.sales[0];
    for (int i = 0; i < QUARTERS; i++){
        if (s.sales[i]<s.min) s.min = s.sales[i];
        if (s.sales[i]>s.max) s.max = s.sales[i];
        
        s.average += s.sales[i];
    }

    s.average = s.average / QUARTERS;
} // void SALES::setSales(SALES::Sales & s)


// Отображает всю информацию из структуры s
void SALES::showSales(const SALES::Sales & s){
    using SALES::Sales;
    using SALES::QUARTERS;

    using std::cout;
    using std::endl;

    for (int i = 0; i < QUARTERS; i++)
        cout << "Sales " << i + 1 << " = " << s.sales[i] << endl;
    
    cout << "s.average = " << s.average << endl;
    cout << "s.max = " << s.max << endl;
    cout << "s.min = " << s.min << endl;
    cout << endl;
} // void SALES::showSales(const SALES::Sales & s)