/* 05_02.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 5, страница 255, упражнение 2

	Перепишите код из листинга 5.4 с использованием объекта array вместо 
	встроенного массива и типа long double вместо long long. Найдите значение 100!

	ЛИСТИНГ 5.4
	#include <iostream>
	const int ArSize =16; // пример внешнего объявления
	int main()
	{
			long long factorials[ArSize];
			factorials [1] = factorials[0] = 1LL;
			for (int i = 2; i < ArSize; i + + )
					factorials[i] = i * factorials[i-l];
			for (i = 0; i < ArSize; i + + )
					std::cout « i « " ! = " << factorials [i] « std::endl;
			return 0;
	}
*/

#include <iostream>
#include <array>

const int ArSize =101; 

int main() {
        std::array<long double, ArSize> factorials;
        factorials[1] = factorials[0] = 1LL;
        for (int i = 2; i < ArSize; i++)
                factorials[i] = i * factorials[i-1];
        
        std::cout << "100! = " << factorials [ArSize-1] << std::endl;
        
        return 0;
}