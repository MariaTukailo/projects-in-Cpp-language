#pragma once
#include "MyException.h"

//коды ошибок: 101 - 150
class MyExceptionContainer : public MyException // класс исключений ввода
{

public:

    MyExceptionContainer(int OtherCode = 0, const string& OtherMessage = "ошибка контейнера") :MyException(OtherCode, OtherMessage) //конструктор по умолчанию , совмещенный с конструктором с параметрами
    {  }

    MyExceptionContainer(const MyExceptionContainer& other) :MyException(other) // конструктор копирования
    {  }

    ~MyExceptionContainer() {}; // деструктор

    virtual void ShowError() const override;   //метод для демонстрации кода и сообщения ошибки

};
