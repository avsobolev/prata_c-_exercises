/* 06_05.cpp
	Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 6, страница 301, упражнение 5

    Королевство Нейтрония, где денежной единицей служит тварп, использует 
    следующую шкалу налогообложения:
    первые 5 000 тварпов — налог 0%
    следующие 10 000 тварпов — налог 10%
    следующие 20 000 тварпов — налог 15%
    свыше 35 000 тварпов — налог 20%
    Например, если некто зарабатывает 38 000 тварпов, то он должен заплатить 
    налогов 5000 х 0,00 + 10000 х 0,10 + 20000 х 0,15 + 3000 х 0,20, или 4 600 тварпов.
    Напишите программу, которая использует цикл для запроса доходов и выдачи
    подлежащего к выплате налога. Цикл должен завершаться, когда пользователь
    вводит отрицательное или нечисловое значение.
*/

#include <iostream>

double calculation(double summ);

int main(){
    using namespace std;

    double tax = 0;
    double revenue = 0;
    cout << "Hom many money do you have: ";

    while (cin >> revenue && revenue >= 0)   
    {
        tax = calculation(revenue);
    
        cout << "Your nalog is: " << tax << endl;

        tax = 0;
        revenue = 0;
        cout << "Hom many money do you have: ";
    }

    cout << "\aBye!" << endl;    
    return 0;
}


// function for calculation tax
// summ - your revenue
double calculation(double summ)
{
    double nalog = 0;
    double arr_coef[] = {0, 0.1, 0.15, 0.2};
    double arr_range[] = {0, 5000, 15000, 35000};

    if (summ > arr_range[0]) {
        if (summ > arr_range[1])
        {
            nalog = nalog + (arr_range[1] - arr_range[0]) * arr_coef[0];
            
            if (summ > arr_range[2])
            {
                nalog = nalog + (arr_range[2] - arr_range[1]) * arr_coef[1];
                
                if (summ > arr_range[3]){
                    nalog = nalog + (arr_range[3] - arr_range[2]) * arr_coef[2] + (summ - arr_range[3]) * arr_coef[3];
                }
                else 
                {
                    nalog = nalog + (summ - arr_range[2]) * arr_coef[2];
                }
            }
            else 
            {
                nalog = nalog + (summ - arr_range[1]) * arr_coef[1];
            }
        }            
        else  
        {
            nalog = nalog + (summ - arr_range[0]) * arr_coef[0];
        }
    } 
    return nalog;
}