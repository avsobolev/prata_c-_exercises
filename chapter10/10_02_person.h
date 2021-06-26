// 10_02_person.h
#ifndef PERSON_H_
#define PERSON_H_
    #include <string>

    class Person {
        private:
            static const int LIMIT=25;
            std::string lname; // фамилия
            char fname[LIMIT] ; // имя
        public:
            Person () { lname = "NoLastName"; fname[0] = '\0'; }            // #1
            Person (const std::string & ln, const char * fn = "Heyyou");    // #2
            // Следующие методы отображают lname и fname
            void Show() const; // формат: имя фамилия
            void FormalShow() const; // формат: фамилия, имя
    };
#endif