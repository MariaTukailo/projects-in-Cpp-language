#include "Mammal.h"
using namespace std;

int Mammal::GetComfortableTemperature()        //метод получения комфортной температуры 
{
	return comfortableTemperature;
}


string& Mammal::GetFurType()                     //метод получения типа шерсти
{
	return furType;
}


void Mammal::SetComfortableTemperature(int comfortableTemperatureAnimaL)           //метод изменения комфортной температуры
{
	comfortableTemperature = comfortableTemperatureAnimaL;

}


void Mammal::SetFurType(const string& furTypeAnimal)                      //метод изменения типа шерсти
{
	furType = furTypeAnimal;
}


istream& operator>>(istream& in, Mammal& obj)                     //перегрузка оператора ввода
{
	in >> static_cast<ZooResindents&>(obj);

	cout << "введите комфортную температуру: ";
	in >> obj.comfortableTemperature;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	cout << "введите тип шерсти: ";
	in >> obj.furType;

	return in;

}


ostream& operator<<(ostream& out, Mammal& obj)                 //перегрузка оператора вывода
{
	out << static_cast<ZooResindents&>(obj);
	out << "|" << setw(25) << obj.comfortableTemperature
		<< "|" << setw(12) << obj.furType;

	return out;
}


Mammal& Mammal::operator=(const Mammal& obj)               //перегрузка оператора присваивания
{
	if (this != &obj)
	{
		ZooResindents::operator=(obj);

		comfortableTemperature = obj.comfortableTemperature;
		furType = obj.furType;
	}
	return *this;
}

void Mammal::ShowMenu()                                    //виртуальная функция меню
{
	ZooResindents::ShowMenu();
	cout << CYAN << "8." << RESET << " Изменить комфортную температуру" << endl;
	cout << CYAN << "9." << RESET << " Изменить тип шерсти" << endl;
	cout << GREEN << "10." << RESET << " Получить комфортную температуру" << endl;
	cout << GREEN << "11." << RESET << " Получить тип шерсти" << endl;
}

void Mammal::ShowTableHeader()                            //виртуальная функция демонстрации шапки таблицы
{
	ZooResindents::ShowTableHeader();
	cout << "|" << setw(25) << "комфортная температура"
		<< "|" << setw(12) << "тип шерсти";

}

