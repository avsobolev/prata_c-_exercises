/* 07_09.cpp
	Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 7, страница 365, упражнение 9

    Следующее упражнение позволит попрактиковаться в написании функций, 
    работающих с массивами и структурами. Ниже представлен каркас программы.
    Дополните его функциями, описанными в комментариях.

    #include <iostream>
    using namespace std;
    const int SLEN = 30;
    struct student {
        char fullname[SLEN];
        char hobby[SLEN];
        int ooplevel;
    };
    
    // getinfo() принимает два аргумента: указатель на первый элемент
    // массива структур student и значение int, представляющее
    // количество элементов в массиве. Функция запрашивает и
    // сохраняет данные о студентах. Ввод прекращается либо после
    // наполнения массива, либо при вводе пустой строки в качестве
    // имени студента. Функция возвращает действительное количество
    //введенных элементов.
    int getinfо(student pa[], int n) ;
    
    // display1() принимает в качестве аргумента структуру student
    // и отображает ее содержимое.
    void display1(student st);
    
    // display2() принимает адрес структуры student в качестве аргумента
    // и отображает ее содержимое,
    void display2(const student * ps) ;
    
    // display3() принимает указатель на первый элемента массива
    // структур student и количество элементов в этом массиве и
    // отображает содержимое всех структур в массиве,
    void display3(const student pa[], int n) ;
    
    int main ()
    {
        cout « "Enter class size: ";
        int class_size;
        cin >> class_size;
        while (cin.getO != '\n')
        continue;
        student * ptr_stu = new student[class_size];
        int entered = getinfо (ptr_stu, class_size);
        for (int i = 0; i < entered; i + + )
        {
            displayl (ptr_stu [i] ) ;
            display2(&ptr_stu[i]);
        }
        display3(ptr_stu, entered);
        delete [] ptr_stu;
        cout << "Done\n";
        return 0;
    }
 */

#include <iostream>

using namespace std;

const int SLEN = 30;

struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

// getinfo() принимает два аргумента: указатель на первый элемент
// массива структур student и значение int, представляющее
// количество элементов в массиве. Функция запрашивает и
// сохраняет данные о студентах. Ввод прекращается либо после
// наполнения массива, либо при вводе пустой строки в качестве
// имени студента. Функция возвращает действительное количество
//введенных элементов.
int getinfo(student pa[], int n);

// display1() принимает в качестве аргумента структуру student
// и отображает ее содержимое.
void display1(student st);

// display2() принимает адрес структуры student в качестве аргумента
// и отображает ее содержимое,
void display2(const student * ps) ;

// display3() принимает указатель на первый элемента массива
// структур student и количество элементов в этом массиве и
// отображает содержимое всех структур в массиве,
void display3(const student pa[], int n) ;

int main ()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    
    while (cin.get() != '\n')
        continue;
    
    student * ptr_stu = new student[class_size];
    
        int entered = getinfo(ptr_stu, class_size);
        cout << "Total student data entered: " << entered << endl;
        cout << "============" << endl;
        
        for (int i = 0; i < entered; i++)
        {
            display1(ptr_stu[i]) ;
            cout << "-----------" << endl;
            display2(&ptr_stu[i]);
            cout << "-----------" << endl;
        }
        cout << "-----------" << endl;
        display3(ptr_stu, entered);
   
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}


// getinfo() принимает два аргумента: указатель на первый элемент
// массива структур student и значение int, представляющее
// количество элементов в массиве. Функция запрашивает и
// сохраняет данные о студентах. Ввод прекращается либо после
// наполнения массива, либо при вводе пустой строки в качестве
// имени студента. Функция возвращает действительное количество
// введенных элементов.
int getinfo(student pa[], int n)
{
    int i;
    int j;
    char ch;

    cout << endl;
    cout << "INPUT STUDENT DATA." << endl;
    cout << "===================" << endl << endl;

    for (i = 0; i < n; i++)
    {
        cout << "Student №" << i+1 << endl;
        cout << "-------------" << endl;

        cout << "Enter student FullName: ";
        
        j = 0;
        while (cin.get(ch) && ch !='\n')
        {
            pa[i].fullname[j] = ch; 
            j++;
            if (j>=SLEN) break;
        }

        pa[i].fullname[j] = '\0';
        
        if (j==0) 
        {
            break;
        }

        cout << "Enter student Hobby: ";
        cin >> pa[i].hobby;

        cout << "Enter student Ooplevel: ";
        while (!(cin >> pa[i].ooplevel)) {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Error. Try again: ";
        }
        while (cin.get() != '\n')
            continue;

        cout << endl << endl;
    }

    return i;
} // int getinfo(student pa[], int n)


// display1() принимает в качестве аргумента структуру student
// и отображает ее содержимое.
void display1(student st)
{
    cout << "FullName=" << st.fullname << endl;
    cout << "Hobby=" << st.hobby << endl;
    cout << "ooplevel=" << st.ooplevel << endl;
} // void display1(student st)


// display2() принимает адрес структуры student в качестве аргумента
// и отображает ее содержимое,
void display2(const student * ps)
{
    cout << "*FullName=" << ps -> fullname << endl;
    cout << "*Hobby=" << ps -> hobby << endl;
    cout << "*ooplevel=" << ps -> ooplevel << endl;
} // void display2(const student * ps)


// display3() принимает указатель на первый элемента массива
// структур student и количество элементов в этом массиве и
// отображает содержимое всех структур в массиве,
void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "as_FullName=" << pa[i].fullname << endl;
        cout << "as_Hobby=" << pa[i].hobby << endl;
        cout << "as_ooplevel=" << pa[i].ooplevel << endl;
    }
} // void display3(const student pa[], int n) 