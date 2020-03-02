/* 06_07.cpp
	Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 6, страница 301, упражнение 7

    Напишите программу, которая читает слова по одному за раз, пока не будет 
    введена отдельная буква q. После этого программа должна сообщить количество
    слов, начинающихся с гласных, количество слов, начинающихся с согласных,
    а также количество слов, не попадающих ни в одну из этих категорий. Одним
    из возможных подходов может быть применение isalpha () для различения
    слов, начинающихся с букв, и остальных, с последующим применением if или
    switch для идентификации тех слов, прошедших проверку isalpha (), 
    которые начинаются с гласных. Пример запуска может выглядеть так:
    Enter words (q to quit) :
    The 12 awesome oxen ambled
    quietly across 15 meters of lawn, q
    5 words beginning with vowels
    4 words beginning with consonants
    2 others
*/

#include <iostream>
#include <cctype>

int main(){
    using namespace std;
    cout << "Enter words (q to quit): " << endl;
    char ch;
    bool bexit = false;
    char fch=0;
    int i=0;
    int w=0;
    int vow=0;
    int con=0; 
    int oth=0; 
    
    while (bexit == false && cin.get(ch))
    {
        while (!isspace(ch))
        {
            if (fch == 0) 
            {
                fch=ch;
                w++;

                if (isalpha(ch))
                {
                    switch (ch)
                    {
                        case 'e': 
                        case 'E': 
                        case 'y': 
                        case 'Y': 
                        case 'u': 
                        case 'U': 
                        case 'i': 
                        case 'I': 
                        case 'o': 
                        case 'O': 
                        case 'a': 
                        case 'A': 
                        case 'j': 
                        case 'J': vow++;
                            break;
                        default: con++;
                            break;
                    }
                }
                else {
                    oth++;
                }
            } 

            i++;
            cin.get(ch);
        }
        
        if (fch == 'q' && i == 1)
        {
            bexit = true;
            con--;
        }
        else
        {
            fch=0;
            i=0;    
        }
    }    
       
    cout << "All entered words, include q: " << w << endl;    

    cout << vow << " words beginning with vowels" << endl;
    cout << con << " words beginning with consonants" << endl;
    cout << oth << " others" << endl;

    return 0;
}