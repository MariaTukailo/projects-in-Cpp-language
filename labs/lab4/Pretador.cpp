#include "Pretador.h"
using namespace std;

int Pretador::GetDangerLevel()                //метод для получения размаха крыльев
{
	return dangerLevel;
}


void Pretador::SetDangerLevel(int dangerLevelAnimal)               //метод для изменения размаха крыльев
{
	dangerLevel = dangerLevelAnimal;
}


istream& operator>>(istream& in, Pretador& obj)                   //перегрузка оператора ввода
{
	in >> static_cast<Mammal&>(obj);

	cout << "введите степень опасности(0-10): ";
	in >> obj.dangerLevel;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	return in;
}


ostream& operator<<(ostream& out, Pretador& obj)                   //перегрузка оператора вывода
{
	out << static_cast<Mammal&>(obj);
	out << "|" << setw(20) << obj.dangerLevel;

	return out;
}


Pretador& Pretador::operator=(const Pretador& obj)                       //перегрузка оператора присваивания
{
	if (this != &obj)
	{
		Mammal::operator= (obj);
		dangerLevel = obj.dangerLevel;
	}

	return *this;
}


void Pretador::ShowMenu()                                  //виртуальная функция меню
{
	Mammal::ShowMenu();
	cout << CYAN << "12." << RESET << " Изменить степень опасности" << endl;
	cout << GREEN << "13." << RESET << " Получить степень опасности" << endl;
}


void Pretador::ShowTableHeader()                        //виртуальный метод демонстрации шапки таблицы
{
	Mammal::ShowTableHeader();
	cout << "|" << setw(20) << "степень опасности";

}

