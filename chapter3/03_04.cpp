/* 03_04.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 3, страница 129, упражнение 4

	Напишите программу, которая запрашивает количество секунд в виде целого
	значения (используйте тип long или long long, если последний доступен) и
	затем отображает эквивалентное значение в сутках, часах, минутах и секундах.
	Для представления количества часов в сутках, количества минут в часе и 
	количества секунд в минуте используйте символические константы. Результат 
	выполнения программы должен выглядеть следующим образом:
	Enter the number of seconds: 31600000
	31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
*/

#include <iostream>

int main()
{
	using namespace std;
	const int C_spd = 3600*24;
	const int C_sph = 3600;
	const int C_spm = 60;

	long d, h, m, s;
	long t_s;

	cout << "\nEnter the number of seconds: ";
	cin >> t_s;

	d = t_s/C_spd;
	h = t_s%C_spd / C_sph;
	m = t_s%C_sph / C_spm;
	s = t_s%C_spm;

	cout << t_s << " seconds = " << d << " days, " << h << " hours, " << m << " minutes, " << s << " seconds." << endl;
	
	return 0;
}
