/* 07_04.cpp
	Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 7, страница 364, упражнение 4

    Многие лотереи в США организованы подобно той, что была смоделирована
    в листинге 7.4. Во всех их вариациях вы должны выбрать несколько чисел из
    одного набора, называемого полем номеров. (Например, вы можете выбрать 5
    чисел из поля 1-47.) Вы также указываете один номер (называемый меганоме-
    ром) из второго диапазона, такого как 1-27. Чтобы выиграть главный приз, вы
    должны правильно угадать все номера. Шанс выиграть вычисляется как 
    вероятность угадывания всех номеров в поле, умноженная на вероятность 
    угадывания меганомера. Например, вероятность выигрыша в описанном здесь 
    примере вычисляется как вероятность угадывания 5 номеров из 47, умноженная на
    вероятность угадывания одного номера из 27. Модифицируйте листинг 7.4 для
    вычисления вероятности выигрыша в такой лотерее.
*/

// lotto.cpp -- probability of winning
#include <iostream>

// Note: some implementations require double instead of long double
long double probability(unsigned numbers, unsigned picks, unsigned mega_numbers, unsigned mega_picks);

int main()
{
     using namespace std;
    double total, choices, mega_total, mega_choices;
    cout << "Enter: \n1. the total number of choices on the game card and\n"
            "2. the number of picks allowed:\n";
    cout << "3. the Mega total number of choices on the game card and\n"
            "4. the Mega number of picks allowed:\n";            
    while ((cin >> total >> choices >> mega_total >> mega_choices) && choices <= total && mega_choices <=mega_total)
    {
        cout << "You have one chance in ";
        cout << probability(total, choices, mega_total, mega_choices);      // compute the odds
        cout << " of winning.\n";
        cout << "Next four numbers (q to quit): ";
    }
    cout << "bye\n";
    // cin.get();
    // cin.get();
    return 0; 
}


// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks, unsigned mega_numbers, unsigned mega_picks)
{
    long double result = 1.0;  // here come some local variables
    long double mega_result = 1.0;  
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p ; 

    for (n = mega_numbers, p = mega_picks; p > 0; n--, p--)
        mega_result = mega_result * n / p ; 

    result = result * mega_result;

    return result; 
}