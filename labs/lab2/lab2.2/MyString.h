#include <iostream>
#include <cstring>

using namespace std;

class MyString
{
private:

    char* str;
    int len;

public:


    MyString()                                                    // Конструктор по умолчанию
    {
        len = 0;
        str = NULL;

    }

    MyString(const char* otherStr)                                       // Конструктор с параметром
    {
        if (otherStr != NULL) {
            len = strlen(otherStr);
            str = new char[len + 1];
            strcpy_s(str, len + 1, otherStr);
        }
        else
        {
            len = 0;
            str = NULL;
        }
    }

    MyString(const MyString& other)                                                 //конструктор копирования
    {
        len = other.len;
        str = new char[len + 1];
        strcpy_s(str, len + 1, other.str);

    }

    ~MyString()                                                                   //деструктор                                                             
    {
        delete[] str;

    }


    MyString& operator=(const MyString& other);                         //перегрузка оператора присваивания

    friend istream& operator>>(istream& in, MyString& str);             //перегрузка ввода строки
    friend ostream& operator<<(ostream& out, const MyString& str);      //перегрузка вывода строки

    int operator>(const MyString& otherStr);                            //перегрузка оператора больше с возвращением разницы строк(если они больше)
    int operator<(const MyString& otherStr);                            //перегрузка оператора меньше с возвращением разницы строк(если они меньше)
    bool operator!=(const MyString& otherStr);                          //перегрузка оператора !=
    bool operator==(const MyString& otherStr);                          //перегрузка оператора ==

    char& operator[](size_t index);                                     //перегрузка оператора [] для получения доступа к элементу строки
    MyString operator()(size_t index1, size_t index2);                  //перегрузка оператора () для получения подстроки от индекса1 до индекса2

    MyString& operator++();                                             //перегрузка оператора ++ в префиксной форме (каждый элемент строки по таблице ASCI становится на 1 больше)
    MyString& operator--();                                             //перегрузка оператора -- в префиксной форме (каждый элемент строки по таблице ASCI становится на 1 меньше)
    MyString operator++(int);                                           //перегрузка оператора ++ в постфиксной форме (каждый элемент строки по таблице ASCI становится на 1 больше)
    MyString operator--(int);                                           //перегрузка оператора -- в постфиксной форме (каждый элемент строки по таблице ASCI становится на 1 меньше)

    MyString operator+(const MyString& otherStr);                       //перегрузка оператора + для сложения объекта и объекта
    MyString operator+(const char* otherStr);                           //перегрузка оператора + для сложения объекта и строки
    MyString operator+(const char element);                             //перегрузка оператора + для сложения объекта и символа
    friend MyString operator+(const char* otherStr, const MyString& str);//перегрузка оператора + для сложения строки и объекта
    friend MyString operator+(const char element, const MyString& str); //перегрузка оператора + для сложения символа и объекта

    MyString& operator+=(const MyString otherStr);                      //перегрузка оператора += для сложения объекта с объектом и присваивание объекту
    MyString& operator+=(const char* otherStr);                         //перегрузка оператора += для сложения объекта со строкой и присваивание объект
    MyString& operator+=(const char element);                           //перегрузка оператора += для сложения объекта с символом и присваивание объект


};


