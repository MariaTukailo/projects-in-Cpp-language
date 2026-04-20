#include "Bird.h"
#include <iomanip>
#include <iostream>
#include <cstring>

#define RESET    "\033[0m"
#define CYAN     "\033[36m"
#define GREEN    "\033[32m"

using namespace std;


double Bird::GetWingspan() //метод получени€ размаха крыльев 
{
	return wingspan;
}


void Bird::SetWingspan(double wingspanBird)   //метод дл€ изменени€ размаха крыльев
{
	wingspan = wingspanBird;
}

istream& operator>>(istream& in, Bird& obj)    //перегрузка оператора ввода
{
	in >> static_cast<ZooResindents&>(obj);
	cout << endl << GREEN << "–азмах крыльев:" << RESET << endl;
	obj.wingspan = enterNumberLIMITS_DOUBLE(in, 0.05, 4);

	return in;
}

ostream& operator<<(ostream& out, Bird& obj)  //перегрузка оператора вывода
{
	out << static_cast<ZooResindents&>(obj);
	out << "|" << setw(18) << obj.wingspan;

	return out;
}


Bird& Bird::operator=(const Bird& obj)    //перегрузка оператора присваивани€
{
	if (this != &obj)
	{
		ZooResindents::operator =(obj);
		wingspan = obj.wingspan;
	}

	return *this;
}

void Bird::ShowMenu()      //виртуальна€ функци€ 
{
	ZooResindents::ShowMenu();
	cout << CYAN << "8." << RESET << " »зменить размах крыльев" << endl;
	cout << GREEN << "9." << RESET << " ѕолучить размах крыльев" << endl;
}


void Bird::ShowTableHeader()    //виртуальный метод демонстрации шапки таблицы
{
	ZooResindents::ShowTableHeader();
	cout << "|" << setw(18) << "размах крыльев";

}

ifstream& operator>>(ifstream& in, Bird& obj)
{
	in >> static_cast<ZooResindents&>(obj);
	in >> obj.wingspan;
	in.ignore();
	return in;
}

ofstream& operator<<(ofstream& out, Bird& obj)
{
	out << static_cast<ZooResindents&>(obj);
	out << obj.wingspan << endl;
	return out;
}

fstream& operator<<(fstream& out, const Bird& bird)
{
	
	out << static_cast<const ZooResindents&>(bird);
	out.write(reinterpret_cast<const char*>(&bird.wingspan), sizeof(bird.wingspan));

	return out;
}


fstream& operator>>(fstream& in, Bird& bird)
{
	
	in >> static_cast<ZooResindents&>(bird);
	in.read(reinterpret_cast<char*>(&bird.wingspan), sizeof(bird.wingspan));
	

	return in;
}