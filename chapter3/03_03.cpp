/* 03_03.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 3, страница 129, упражнение 3

	Напишите программу, которая запрашивает широту в градусах, минутах и 
	секундах, после чего отображает широту в десятичном формате. В одной минуте
	60 угловых секунд, а в одном градусе 60 угловых минут; представьте эти 
	значения с помощью символических констант. Для каждого вводимого значения
	должна использоваться отдельная переменная. Результат выполнения 
	программы должен выглядеть следующим образом:
	Enter a latitude in degrees, minutes, and seconds:
	First, enter the degrees: 37
	Next, enter the minutes of arc: 51
	Finally, enter the seconds of arc: 19
	37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
*/

#include <iostream>

int main()
{
	using namespace std;

	const float C_min = 60;
	const float C_sec = 60;

	int deg, min, sec;
	float deg_dec;
	
	cout << "\nEnter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degrees: ";
	cin >> deg;
	cout << "Next, enter the minutes of arc: ";
	cin >> min;
	cout << "Finally, enter the seconds of arc: ";
	cin >> sec;

	deg_dec = deg + min/C_min + sec/(C_sec*C_sec);
	
	cout << endl << deg << " degrees, " << min << " minutes, " << sec << " seconds = " << deg_dec << " degrees" << endl << endl;

	return 0;
}

