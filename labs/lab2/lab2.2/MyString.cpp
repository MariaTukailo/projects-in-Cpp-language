#include <iostream>
#include <cstring>
#include "MyString.h"

using namespace std;


MyString& MyString:: operator=(const MyString& other)                                 //перегрузка оператора присваивания
{
    if (this != &other)
    {
        delete[] str;

        len = other.len;

        str = new char[len + 1];
        if (str == NULL)
        {
            exit(1);
        }
        strcpy_s(str, other.len + 1, other.str);

    }

    return *this;

}


istream& operator>>(istream& in, MyString& str)                                    //перегрузка ввода строки
{
       
    char* buffStr = new char[80];
    if (buffStr == NULL)
    {
        exit(1);
    }


    in.getline(buffStr, 80);

    delete[] str.str;


    str.len = strlen(buffStr);
    str.str = new char[str.len + 1];
    if (str.str == NULL)
    {
        exit(1);
    }
    strcpy_s(str.str, str.len + 1, buffStr);

    delete[] buffStr;

    return in;
}


ostream& operator<<(ostream& out, const MyString& str)                            //перегрузка вывода строки
{
    out << str.str << endl;
    return out;

}


int MyString:: operator>(const MyString& otherStr)                                //перегрузка оператора больше с возвращением разницы строк(если они больше)
{
    if (strcmp(str, otherStr.str))
    {
        return len - otherStr.len;
    }

    return  0;

}


int MyString::operator<(const MyString& otherStr)                                   //перегрузка оператора меньше с возвращением разницы строк(если они меньше)
{
    if (strcmp(otherStr.str, str))
    {
        return otherStr.len - len;
    }

    return  0;

}


bool MyString::operator==(const MyString& otherStr)                                   //перегрузка оператора сравнения строк с возвращением true-если строки равны и  false- если строки не равны                             
{
    return strcmp(str, otherStr.str) == 0;

}


char& MyString::operator[](size_t index)                                               //перегрузка оператора [] для получения доступа к элементу строки
{
    return str[index];

}


bool MyString:: operator!=(const MyString& otherStr)
{
    return strcmp(str, otherStr.str) != 0;

}


MyString MyString:: operator()(size_t index1, size_t index2)                             //перегрузка оператора () для получения подстроки от индекса1 до индекса2
{
    MyString subStr;


    if (index2 < len && index1 < index2)
    {
        subStr.len = index2 - index1 + 1;
        subStr.str = new char[subStr.len + 1];
        if (subStr.str == NULL)
        {
            exit(1);
        }

        for (int i = 0, j = index1; i < subStr.len; i++, j++)
        {
            subStr.str[i] = str[j];

        }

    }

    return subStr;

}


MyString& MyString:: operator++()                                          //перегрузка оператора ++ в префиксной форме (каждый элемент строки по таблице ASCI становится на 1 больше)
{
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'z')
        {
            if (str[i] == 'z')
            {
                str[i] = 'a';

            }
            else if (str[i] == 'Z')
            {
                str[i] = 'A';
            }
            else
            {
                str[i]++;
            }
        }
    }

    return *this;

}


MyString& MyString:: operator--()                                   //перегрузка оператора -- в префиксной форме (каждый элемент строки по таблице ASCI становится на 1 меньше)
{
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'z')
        {
            if (str[i] == 'a')
            {
                str[i] = 'z';

            }
            else if (str[i] == 'A')
            {
                str[i] = 'Z';
            }
            else
            {
                str[i]--;
            }
        }
    }

    return *this;

}


MyString MyString:: operator++(int)                                   //перегрузка оператора ++ в постфиксной форме (каждый элемент строки по таблице ASCI становится на 1 больше)
{
    MyString newStr(*this);

    ++(*this);

    return newStr;

}


MyString MyString:: operator--(int)                                             //перегрузка оператора -- в постфиксной форме (каждый элемент строки по таблице ASCI становится на 1 меньше)
{
    MyString newStr(*this);

    --(*this);

    return newStr;

}


MyString MyString:: operator+(const MyString& otherStr)                                        //перегрузка оператора + для сложения объекта и объекта
{
    MyString newStr;
    newStr.len = len + otherStr.len;

    newStr.str = new char[newStr.len + 1];
    if (newStr.str == NULL)
    {
        exit(1);
    }
    newStr[newStr.len] = '\0';


    for (int i = 0; i < len; i++)
    {

        newStr[i] = str[i];

    }

    for (int j = 0, i = len; i < newStr.len; i++, j++)
    {
        newStr[i] = otherStr.str[j];

    }


    return newStr;

}


MyString MyString:: operator+(const char* otherStr)                                                      //перегрузка оператора + для сложения объекта и строки
{
    MyString newStr;

    newStr.len = len + strlen(otherStr);

    newStr.str = new char[newStr.len + 1];

    newStr.str[newStr.len] = '\0';

    for (int i = 0; i < len; i++)
    {

        newStr[i] = str[i];

    }

    for (int j = 0, i = len; i < newStr.len; i++, j++)
    {
        newStr[i] = otherStr[j];

    }



    return newStr;

}


MyString MyString ::operator+(const char element)                                                       //перегрузка оператора + для сложения объекта и символа
{
    MyString newStr;
    newStr.len = len + 1;

    newStr.str = new char[newStr.len + 1];

    newStr.str[newStr.len] = '\0';

    for (int i = 0; i < len; i++)
    {

        newStr.str[i] = str[i];

    }

    newStr.str[len] = element;


    return newStr;

}

MyString operator+(const char* otherStr, const MyString& str)                                                         //перегрузка оператора + для сложения строки и объекта
{
    MyString newStr;
    newStr.len = str.len + strlen(otherStr);

    newStr.str = new char[newStr.len + 1];

    newStr.str[newStr.len] = '\0';

    for (int i = 0; i < strlen(otherStr); i++)
    {

        newStr[i] = otherStr[i];

    }

    for (int j = 0, i = strlen(otherStr); i < newStr.len; i++, j++)
    {
        newStr[i] = str.str[j];

    }



    return  newStr;

}


MyString operator+(const char element, const MyString& str)                                                            //перегрузка оператора + для сложения символа и объекта
{
    MyString newStr;
    newStr.len = str.len + 1;

    newStr.str = new char[newStr.len + 1];

    newStr[newStr.len] = '\0';


    newStr.str[str.len] = element;
    for (int i = 1; i < str.len + 1; i++)
    {

        newStr.str[i] = str.str[i];

    }

    return newStr;

}


MyString& MyString:: operator+=(const MyString otherStr)                                                          //перегрузка оператора += для сложения объекта с объектом и присваивание объекту
{
    *this = *this + otherStr;

    return *this;

}


MyString& MyString:: operator+=(const char* otherStr)                                                        //перегрузка оператора += для сложения объекта со строкой и присваивание объект
{
    *this = *this + otherStr;

    return *this;

}

MyString& MyString:: operator+=(const char element)                                                            //перегрузка оператора += для сложения объекта с символом и присваивание объект
{
    *this = *this + element;

    return *this;

}



