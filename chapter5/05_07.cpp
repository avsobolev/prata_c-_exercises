/* 05_07.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 5, страница 256, упражнение 7

	Разработайте структуру по имени саг, которая будет хранить следующую 
	информацию об автомобиле: название производителя в виде строки в символьном
	массиве или в объекте string, а также год выпуска автомобиля в виде целого
	числа. Напишите программу, которая запросит пользователя, сколько 
	автомобилей необходимо включить в каталог. Затем программа должна применить new
	для создания динамического массива структур саг указанного пользователем
	размера. Далее она должна пригласить пользователя ввести название 
	производителя и год выпуска для наполнения данными каждой структуры в массиве (см.
	главу 4). И, наконец, она должна отобразить содержимое каждой структуры.
	Пример запуска программы должен выглядеть подобно следующему:
	Сколько автомобилей поместить в каталог? 2
	Автомобиль #1:
	Введите производителя: Hudson Hornet
	Укажите год выпуска: 1952
	Автомобиль #2:
	Введите производителя: Kaiser
	Укажите год выпуска: 1951
	Вот ваша коллекция:
	1952 Hudson Hornet
	1951 Kaiser
*/

#include <iostream>
#include <string>

int main()
{
	using namespace std;
	
	struct cars {
		string manufacturer;
		int year;
	};

	const int Num_auto_max = 10;
	int num_auto = 0;
	
	cout << endl <<"Enter number of cars (1-" << Num_auto_max << "): ";
	cin >> num_auto; 
	cout << "----------" << endl;
	cin.get();
	
	if ((num_auto > 0) and (num_auto <= Num_auto_max)){

		cars *car = new cars[num_auto]; 
		
		// Input data about cars
		for (int i=0; i<=num_auto-1; i++){
			cout << "Enter Manufacturer car №" << i+1 << ": ";
			getline(cin,car[i].manufacturer);

			cout << "Enter Year car №" << i+1 << ": ";
			cin >> car[i].year;
			cin.get();
		}
				
		cout << "===========" << endl;
		cout << "Your collection:" << endl;			
		
		// Output result
		for (int i=0; i<=num_auto-1; i++){
			cout << car[i].year << " " << car[i].manufacturer << endl;
		}	
		
		delete [] car;
	}
	else {
		cout << "Entered number cars is Wrong!" << endl;
	}	
	
	return 0;
}