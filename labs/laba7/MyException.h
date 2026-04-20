#pragma once
#include <iostream>
#include <string>
#include <exception>
#define RESET    "\033[0m"
#define RED      "\033[31m"
using namespace std;

//коды ошибок:
//0 - неизвестная ошибка
//1-50 - ошибки ввода
//51-100 - ошибка файлов
//101-150 - ошибка контейнеров

class MyException : public exception
{
protected:
    int code;          //код ошибки
    string message;    //сообщение 

public:

    MyException(int OtherCode = 0, const string& OtherMessage = "неизвестная ошибка") // конструктор по умолчанию, совмещенный с конструктором с параметрами
    {
        code = OtherCode;
        message = OtherMessage;
    }

    MyException(const MyException& other) // конструктор копирования
    {
        code = other.code;
        message = other.message;
    }

    ~MyException() {};   //деструктор

    int GetCode();     //получить код
    string& GetMessage();   //получить сообщение
    void SetCode(int otherCode);  //изменить код
    void SetMessage(const string& otherMessage);  //изменить сообщение

    const char* what() const noexcept override;
    virtual void ShowError() const;   //метод для демонстрации кода и сообщения ошибки
};
