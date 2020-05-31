/* 09_02.cpp
    Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 9, страница 480, упражнение 2

    Модифицируйте код в листинге 9.9, заменив символьный массив объектом
    string. Программа больше не должна проверять, умещается ли вводимая 
    строка, и для проверки ввода пустой строки может сравнивать вводимую строку со
    значением "".

    ЛИСТИНГ 9.9.
    // static.cpp -- using a static local variable
    #include <iostream>
    // constants
    const int ArSize = 10;

    // function prototype
    void strcount(const char * str);

    int main()
    {
        using namespace std;
        char input[ArSize];
        char next;

        cout << "Enter a line:\n";
        cin.get(input, ArSize);
        while (cin)
        {
            cin.get(next);
            while (next != '\n')    // string didn't fit!
                cin.get(next);      // dispose of remainder
            strcount(input);
            cout << "Enter next line (empty line to quit):\n";
            cin.get(input, ArSize);
        }
        cout << "Bye\n";
        return 0;
    }

    void strcount(const char * str)
    {
        using namespace std;
        static int total = 0;        // static local variable
        int count = 0;               // automatic local variable

        cout << "\"" << str <<"\" contains ";
        while (*str++)               // go to end of string
            count++;
        total += count;
        cout << count << " characters\n";
        cout << total << " characters total\n";
    }
*/

#include <iostream>
#include <string>

// function prototype
void strcount(const std::string str);

int main()
{
    using namespace std;
    string input;

    cout << "Enter a line:\n";
    
    while (getline(cin,input) && input != "")
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
    }
    cout << "Bye\n";
    return 0;
} // int main()

void strcount(const std::string str){
    using namespace std;
    
    static int total = 0;        // static local variable
    int count =  str.size();     // automatic local variable
    total += count;

    cout << "\"" << str <<"\" contains " << count << " characters\n";
    cout << total << " characters total\n";
} // void strcount(const std::string str)