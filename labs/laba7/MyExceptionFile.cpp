#include "MyExceptionFile.h"

void MyExceptionFile::ShowError() const   //метод для демонстрации кода и сообщения ошибки
{
	cout << RED << "Ошибка файла ( код: " << code << "): " << message << RESET << endl;
}