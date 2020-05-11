/* 08_06.cpp
	Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 8, страница 428, упражнение 6

    Напишите шаблонную функцию maxn (), которая принимает в качестве 
    аргумента массив элементов типа т и целое число, представляющее количество 
    элементов в массиве, а возвращает элемент с наибольшим значением. Протестируйте
    ее работу в программе, которая использует этот шаблон с массивом из шести
    значений int и массивом из четырех значений double. Программа также 
    должна включать специализацию, которая использует массив указателей на char в 
    качестве первого аргумента и количество указателей — в качестве второго, а затем
    возвращает адрес самой длинной строки. Если имеется более одной строки 
    наибольшей длины, функция должна вернуть адрес первой из них. Протестируйте
    специализацию на массиве из пяти указателей на строки.
*/

#include <iostream>
#include <cstring>

template <typename T> T maxn(T * p, int size);
template <>  const char * maxn(const char * pa[], int size);


int main(){
    using namespace std;
    int size1 = 6;
    int arr1[size1] = {1,-302,25,12,23,1};
    cout << "int max: " << maxn(arr1, size1) << endl;

    int size2 = 4;
    double arr2[size2] = {1.1,2.2,5.4,-12.12};
    cout << "double max: " << maxn(arr2, size2) << endl;

    int size3 = 5;
    const char * arr3[size3] = {"aaa", "123456789", "ccccccc", "012345678", "eeee"};
    cout << "char max: " << maxn(arr3, size3) << endl;

    return 0;
} //int main ()


template <typename T> T maxn(T * p, int size) {
    T maxval;
    maxval = p[0];

    for (int i=1; i<size; i++) if (p[i]>maxval) maxval=p[i];
    
    return maxval;
} // template <typename T> T maxn(T * p, int size)


template <> const char * maxn(const char * pa[], int size) {
    const char * ps;
    int maxlen = 0;
    int len = 0;

    for (int i = 0; i < size; i++)
    {
        len = strlen(pa[i]);
        if (len>maxlen){
            maxlen=len;
            ps = pa[i];
        }
    }
    return ps;
} // template <> const char * maxn(const char * pa[], int size)