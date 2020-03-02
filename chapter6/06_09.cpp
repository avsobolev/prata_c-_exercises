/* 06_09.cpp
	Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 6, страница 302, упражнение 9

    Выполните упражнение 6, но измените его так, чтобы данные можно было 
    получать из файла. Первым элементом файла должно быть количество меценатов,
    а остальная часть состоять из пар строк, в которых первая строка содержит
    имя, а вторая — сумму пожертвования. То есть файл должен выглядеть 
    примерно так:
    4
    Sam Stone
    2000
    Freida Flass
    100500
    Tammy Tubbs
    5000
    Rich Raptor
    55000

    УПРАЖНЕНИЕ №6
    Постройте программу, которая отслеживает пожертвования в Общество
    Защиты Влиятельных Лиц. Она должна запрашивать у пользователя 
    количество меценатов, а затем приглашать вводить их имена и суммы пожертвований от
    каждого. Информация должна сохраняться в динамически выделяемом массиве
    структур. Каждая структура должна иметь два члена: символьный массив (или
    объект string) для хранения имени и переменную-член типа double — для
    хранения суммы пожертвования. После чтения всех данных программа должна
    отображать имена и суммы пожертвований тех, кто не пожалел $10 000 и 
    более. Этот список должен быть озаглавлен меткой "Grand Patrons". После этого
    программа должна выдать список остальных жертвователей. Он должен быть
    озаглавлен "Patrons". Если в одной из двух категорий не окажется никого, 
    программа должна напечатать "попе". Помимо отображения двух категорий, 
    никакой другой сортировки делать не нужно.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

struct patrons
{
    std::string name;
    double sum;
};

std::string main_menu();
void enter_data();
void load_data(std::string datafilename);
void result(patrons *person, int n);


int main(){
    using namespace std; 
   
    string filename = "06_09.txt";
   
    string ch=main_menu(); 
    
    while (ch!="q")
    {
        
        if (ch=="1")
        {
            enter_data();
        }
        else if (ch=="2")
        {
            load_data(filename);
        }
        else 
        {
            cout << "Error. Try again." << endl;
        }
        ch=main_menu();
    }
    
    cout << "Exit. Bye!" << endl;
    cin.get();

    return 0;
}


std::string main_menu() 
{
    using namespace std;
    string str = "";

    cout << "\nMenu: " << endl;
    cout << "1 to ENTER data manually." << endl;
    cout << "2 to LOAD data from file (9.txt)." << endl;
    cout << "Q/q to EXIT." << endl;
    cout << "Your choose: ";
    cin >> str;
    
    return str;
}


void enter_data()
{
    using namespace std;

    cout << endl;
    cout << "-----------" << endl;
    cout << "ENTER data." << endl;
    cout << "-----------" << endl;
    cout << "Enter number person: ";

    int n = 0;
    cin >> n;

    vector<patrons> person(n); 

    cout << "----------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter name person №" << i << ": ";
        cin >> person[i].name;
        cout << "Enter donation person №" << i << ": ";
        cin >> person[i].sum;
    }

    result(&person[0],n);
}


void load_data(std::string datafilename)
{
    using namespace std;

    cout << endl;
    cout << "-----------" << endl;
    cout << "LOAD data." << endl;
    cout << "-----------" << endl;
    cout << "load file: " << datafilename << endl;

    int n = 0;    
    ifstream inFile; 
    
    inFile.open(datafilename);
    
    if (inFile.is_open()) 
    {
        inFile >> n;
        while (inFile.get() != '\n' && !inFile.eof()) {}
        cout << "Number persons in file: " << n << endl;

        vector<patrons> person(n);

        for (int i = 0; i < n; i++)
        {
            getline(inFile, person[i].name);
            inFile >> person[i].sum;
            while (inFile.get() != '\n' && !inFile.eof()) {}
        }
        
        for (int i = 0; i < n; i++)
        {
            cout << person[i].name << " : " << person[i].sum << endl;
        }
        result(&person[0],n);
    }
    else
    {
        cout << "Error open file: " << datafilename << endl;
    }
    inFile.close();
}


void result(patrons *person, int n)
{
    using namespace std;

    cout << endl;

    cout << "=====================" << endl;
    cout << "!!! Grand Patrons !!!" << endl;
    int j=0;
    cout << endl;

    for (int i=0; i<n; i++)
    {
        if (person[i].sum >= 10000)
        {
            j++;
            cout << j << ". " << person[i].name << " donated: " << person[i].sum << "$." << endl;
        }
    }
    
    if (j==0)
    {
        cout << "none" << endl;
    }

    cout << endl;
    cout << "--- Patrons ---" << endl;
    j=0;

    for (int i=0; i<n; i++)
    {
        if (person[i].sum < 10000)
        {
            j++;
            cout << j << ". " << person[i].name << " donated: " << person[i].sum << "$." << endl;
        }
    }
    
    if (j==0)
    {
        cout << "none" << endl;
    } 
}