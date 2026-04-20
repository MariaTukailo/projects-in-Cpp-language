#include "Pretador.h"
using namespace std;

int Pretador::GetDangerLevel()                //метод дл€ получени€ размаха крыльев
{
	return dangerLevel;
}


void Pretador::SetDangerLevel(int dangerLevelAnimal)               //метод дл€ изменени€ размаха крыльев
{
	dangerLevel = dangerLevelAnimal;
}



istream& operator>>(istream& in, Pretador& obj)                   //перегрузка оператора ввода
{
	in >> static_cast<Mammal&>(obj);
	cout << endl << GREEN << "—тепень опасности:" << RESET << endl;
	obj.dangerLevel = enterNumberLIMITS_INT(in, 0, 10);

	return in;
}



ostream& operator<<(ostream& out, Pretador& obj)                   //перегрузка оператора вывода
{
	out << static_cast<Mammal&>(obj);
	out << "|" << setw(20) << obj.dangerLevel;

	return out;
}


Pretador& Pretador::operator=(const Pretador& obj)                       //перегрузка оператора присваивани€
{
	if (this != &obj)
	{
		Mammal::operator= (obj);
		dangerLevel = obj.dangerLevel;
	}

	return *this;
}


void Pretador::ShowMenu()                                  //виртуальна€ функци€ меню
{
	Mammal::ShowMenu();
	cout << CYAN << "12." << RESET << " »зменить степень опасности" << endl;
	cout << GREEN << "13." << RESET << " ѕолучить степень опасности" << endl;
}


void Pretador::ShowTableHeader()                        //виртуальный метод демонстрации шапки таблицы
{
	Mammal::ShowTableHeader();
	cout << "|" << setw(20) << "степень опасности";

}

ifstream& operator>>(ifstream& in, Pretador& obj)
{
	in >> static_cast<Mammal&>(obj);
	in >> obj.dangerLevel;
	in.ignore();
	return in;
}

ofstream& operator<<(ofstream& out, Pretador& obj)
{
	out << static_cast<Mammal&>(obj);
	out << obj.dangerLevel << endl;
	return out;
}


fstream& operator<<(fstream& out, const Pretador& predator)
{
	
	out << static_cast<const Mammal&>(predator);
	out.write(reinterpret_cast<const char*>(&predator.dangerLevel), sizeof(predator.dangerLevel));

	return out;
}


fstream& operator>>(fstream& in, Pretador& predator)
{
	
	in >> static_cast<Mammal&>(predator);
	in.read(reinterpret_cast<char*>(&predator.dangerLevel), sizeof(predator.dangerLevel));
	

	return in;
}
