#include "MyException.h"

int MyException::GetCode()                                //получить код
{
	return code;
}

string& MyException::GetMessage()                          //получить сообщение
{
	return message;
}

void MyException::SetCode(int otherCode)                    //изменить код
{
	code = otherCode;
}

void MyException::SetMessage(const string& otherMessage)     //изменить сообщение
{
	message = otherMessage;
}

void MyException::ShowError() const                           //метод для демонстрации кода и сообщения ошибки
{
	cout << RED << "Ошибка ( код: " << code << "): " << message << RESET << endl;
}

const char* MyException::what()const noexcept                //метод для выбрасывания стандартного исключения
{
	return message.c_str();
}