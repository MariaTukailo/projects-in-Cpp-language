#include "MyExceptionsGeneral.h"
#include <iostream>
#include <string>
#include "MyExceptionInput.h"
using namespace std;

int enterNumberLIMITS_INT(istream& in, int minLim, int maxLim)    //функция для проверки ввода числа int в определенном диапазоне
{
    if (minLim > maxLim)
        swap(minLim, maxLim);

    int number;
    bool flags;
    do
    {
        try
        {
            flags = false;
            cout << "Введите число в пределах " << minLim << " - " << maxLim << " :";
            in >> number;
            if (!in || in.peek() != '\n')
                throw MyExceptionInput(1, "Введено не число типа int!");
            if (number<minLim || number>maxLim)
                throw MyExceptionInput(3, "Введено число int в недопустимых пределах!");
        }
        catch (const MyExceptionInput& error)
        {
            rewind(stdin);
            in.clear();
            flags = true;
            error.ShowError();

        }
    } while (flags);
    return number;
}

double enterNumberLIMITS_DOUBLE(istream& in, double minLim, double maxLim)  //функция для проверки ввода числа double в определенном диапазоне
{
    if (minLim > maxLim)
        swap(minLim, maxLim);

    double number;
    bool flags;
    do
    {
        try
        {

            flags = false;
            cout << "Введите число в пределах " << minLim << " - " << maxLim << " :";
            in >> number;
            if (!in || in.peek() != '\n')
                throw MyExceptionInput(2, " введено не число double");
            if (number<minLim || number>maxLim)
                throw MyExceptionInput(4, "Введено число double в недопустимых пределах!");

        }
        catch (const MyExceptionInput& error)
        {
            rewind(stdin);
            in.clear();
            flags = true;
            error.ShowError();

        }
    } while (flags);
    return number;
}


string InputNameRUS(istream& in)
{
    string str;
    bool flags;

    do
    {
        try
        {
            flags = false;
            cout << "Введите имя: ";
            if (!getline(in, str))
                throw MyExceptionInput(5, "Введена пустая строка, ошибка чтения!");

            if (!IsRussianUpper((unsigned char)str[0]))
                throw MyExceptionInput(6, "Имя должно начинаться с заглавной русской буквы!");
            ValidateRussianWordOrThrow(str);

        }
        catch (const MyExceptionInput& error)
        {
            flags = true;
            error.ShowError();
        }
    } while (flags);

    return str;
}

string InputWordRUS(istream& in) //функция для проверки ввода буквенной строки
{
    string str;
    bool flags;
    do
    {
        try
        {
            flags = false;
            cout << "Введите русское слово: ";
            if (!getline(in, str))
            {
                throw MyExceptionInput(5, "Введена пустая строка, ошибка чтения!");
            }
            ValidateRussianWordOrThrow(str);

        }
        catch (const MyExceptionInput& error)
        {
            flags = true;
            error.ShowError();
            in.clear();
            rewind(stdin);
        }
    } while (flags);

    return str;

}

string enterStrRUS(istream& in) //функция для проверки ввода русской строки
{
    string str;
    bool flags;
    do
    {
        try
        {
            flags = false;
            cout << "Введите русскую строку: ";

            if (!getline(in, str))
                throw MyExceptionInput(5, "Введена пустая строка, ошибка чтения!");


            for (unsigned char c : str)
            {
                if (IsEnglish(c))
                    throw MyExceptionInput(9, "Строка содержит английские буквы!");

            }
        }
        catch (const MyExceptionInput& error)
        {
            flags = true;
            error.ShowError();
            in.clear();
            rewind(stdin);
        }
    } while (flags);

    return str;
}

void ValidateRussianWordOrThrow(const string& str)
{
    for (unsigned char c : str) {
        if (IsDigit(c)) {
            throw MyExceptionInput(8, "Строка содержит цифры!");
        }
        else if (IsSpace(c)) {
            throw MyExceptionInput(10, "Слово содержит пробелы!");
        }
        else if (IsEnglish(c)) {
            throw MyExceptionInput(9, "Строка содержит английские буквы!");
        }
        else if (!IsRussian(c)) {
            throw MyExceptionInput(7, "Строка содержит посторонние символы!");
        }
    }
}