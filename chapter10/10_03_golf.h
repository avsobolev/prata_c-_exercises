// 10_03_golf.h

#ifndef GOLF_H_
#define GOLF_H_
    const int Len = 40; 
    
    class Golf {
        private: 
            char fullname_[Len];
            int handicap_;
        
        public:
            // конструктор по умолчанию
            Golf() {fullname_[0] = '\0'; handicap_ = 0;}; 
            
            // конструктор неинтерактивная функция:
            // функция присваивает объекту имя игрока и его гандикап (фору),
            // используя передаваемые ей аргументы или их значения по умолчанию
            Golf(const char * name, int he = 0); 
            
            // Интерактивная версия заполнения объекта
            // функция предлагает пользователю ввести имя и гандикап,
            // присваивает элементам объекта введенные значения;
            // возвращает 1, если введено имя, и 0, если введена пустая строка
            int setgolf(); 

            // Функция устанавливает новое значение гандикапа
            void sethandicap(int he); 
            
            // Функция отображает содержимое объекта типа golf
            void showgolf() const;
    };
#endif