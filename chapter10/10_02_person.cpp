// 10_02_person.cpp
#include "10_02_person.h"

#include <string>
#include <cstring>
#include <iostream>

Person::Person(const std::string & ln, const char * fn){
    lname = ln;
    strcpy(fname,fn);
} // Person::Person(const std::string & ln, const char * fn)


// формат: имя фамилия
void Person::Show() const {
    using std::cout, std::endl;
    cout << fname << " " << lname << endl;
} // void Person::Show() const


// формат: фамилия, имя
void Person::FormalShow() const {
    using std::cout, std::endl;
    cout << lname << " " << fname << endl;
} // void Person::FormalShow() const 