#include "MyExceptionContainer.h"

void MyExceptionContainer::ShowError() const   //метод для демонстрации кода и сообщения ошибки
{
	cout << RED << "Ошибка контейнера ( код: " << code << "): " << message << RESET << endl;
}