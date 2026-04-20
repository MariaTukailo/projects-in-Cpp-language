#pragma once
#include "MyException.h"

//коды ошибок: 51 - 100
class MyExceptionFile : public MyException // класс исключений ввода
{

public:

    MyExceptionFile(int OtherCode = 0, const string& OtherMessage = "ошибка файла") :MyException(OtherCode, OtherMessage) //конструктор по умолчанию , совмещенный с конструктором с параметрами
    {  }

    MyExceptionFile(const MyExceptionFile& other) :MyException(other) // конструктор копирования
    {  }

    ~MyExceptionFile() {}; // деструктор

    virtual void ShowError() const override;   //метод для демонстрации кода и сообщения ошибки

};