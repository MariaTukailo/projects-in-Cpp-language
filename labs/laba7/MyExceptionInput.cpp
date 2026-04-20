#include "MyExceptionInput.h"

void MyExceptionInput::ShowError() const   //метод для демонстрации кода и сообщения ошибки
{
	cout << RED << "Ошибка ввода ( код: " << code << "): " << message << RESET << endl;
}