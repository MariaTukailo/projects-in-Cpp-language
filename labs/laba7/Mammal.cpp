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

	cout << endl << GREEN << "Комфортная температура:" << RESET << endl;
	obj.comfortableTemperature = enterNumberLIMITS_INT(in, -40, 40);
	cout << endl << GREEN << "Тип шерсти животного:" << RESET << endl;
	obj.furType = InputWordRUS(in);

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

ifstream& operator>>(ifstream& in, Mammal& obj)
{
	in >> static_cast<ZooResindents&>(obj);
	in >> obj.comfortableTemperature;
	in.ignore();
	getline(in, obj.furType, ';');
	return in;
}

ofstream& operator<<(ofstream& out, Mammal& obj)
{
	out << static_cast<ZooResindents&>(obj);
	out << obj.comfortableTemperature << ';' << obj.furType << ';';
	return out;
}


fstream& operator<<(fstream& out, const Mammal& mammal)
{
    
    out << static_cast<const ZooResindents&>(mammal);

   
    out.write(reinterpret_cast<const char*>(&mammal.comfortableTemperature), sizeof(mammal.comfortableTemperature));

   
    int len = static_cast<int>(mammal.furType.size());
    out.write(reinterpret_cast<const char*>(&len), sizeof(len));
    out.write(mammal.furType.c_str(), len);

    return out;
}


fstream& operator>>(fstream& in, Mammal& mammal)
{
   
    in >> static_cast<ZooResindents&>(mammal);
	in.read(reinterpret_cast<char*>(&mammal.comfortableTemperature), sizeof(mammal.comfortableTemperature));
	   
    int len;
    in.read(reinterpret_cast<char*>(&len), sizeof(len));

    mammal.furType.resize(len);
    in.read(&mammal.furType[0], len);

    return in;
}