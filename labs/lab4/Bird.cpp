#include "Bird.h"
#include <iomanip>
#include <iostream>
#include <cstring>

#define RESET    "\033[0m"
#define CYAN     "\033[36m"
#define GREEN    "\033[32m"

using namespace std;


double Bird::GetWingspan() //метод получения размаха крыльев 
{
	return wingspan;
}


void Bird::SetWingspan(double wingspanBird)   //метод для изменения размаха крыльев
{
	wingspan = wingspanBird;
}

istream& operator>>(istream& in, Bird& obj)    //перегрузка оператора ввода
{
	in >> static_cast<ZooResindents&>(obj);

	cout << "введите размах крыльев ( в метрах ): ";
	in >> obj.wingspan;

	return in;

}


ostream& operator<<(ostream& out, Bird& obj)  //перегрузка оператора вывода
{
	out << static_cast<ZooResindents&>(obj);
	out << "|" << setw(18) << obj.wingspan ;

	return out;
}


Bird& Bird::operator=(const Bird& obj)    //перегрузка оператора присваивания
{
	if (this != &obj)
	{
		ZooResindents::operator =(obj);
		wingspan = obj.wingspan;
	}

	return *this;
}

void Bird::ShowMenu()      //виртуальная функция 
{
	ZooResindents::ShowMenu();
	cout << CYAN << "8." << RESET << " Изменить размах крыльев" << endl;
	cout << GREEN << "9." << RESET << " Получить размах крыльев" << endl;
}


void Bird::ShowTableHeader()    //виртуальный метод демонстрации шапки таблицы
{
	ZooResindents::ShowTableHeader();
	cout << "|" << setw(18) << "размах крыльев";

}

