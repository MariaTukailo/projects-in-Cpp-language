#pragma once
#include "MyException.h"

//коды ошибок: 1 - 50
//1 введено не число int
//2 введено не число double
//3 введено число int не в определенных переделах
//4 введено число double не в определенных пределах
//5 введена пустая строка
//6 введена строка не с большой буквы
//7 введена строка с нерусскими буквами
//8 в строке содержаться цифры
//9 в строке содержаться английские буквы, а ожидалось русские

class MyExceptionInput : public MyException // класс исключений ввода
{

public:

    MyExceptionInput(int OtherCode = 0, const string& OtherMessage = "ошибка ввода") :MyException(OtherCode, OtherMessage) //конструктор по умолчанию , совмещенный с конструктором с параметрами
    {  }

    MyExceptionInput(const MyExceptionInput& other) :MyException(other) // конструктор копирования
    {  }

    ~MyExceptionInput() {}; // деструктор

    virtual void ShowError() const override;   //метод для демонстрации кода и сообщения ошибки

};

