#include "ZooResidents.h"
using namespace std;

string& ZooResindents::GetName()       //метод для получения клички
{
	return name;
}


string& ZooResindents::GetPlaceHabitat()        //метод для получения места обитания
{
	return placeHabitat;
}


string& ZooResindents::GetView()                 //метод для аолучения вида животного
{
	return view;
}


void ZooResindents::SetName(const string& nameAnimal)           //метод для изменения клички
{
	name = nameAnimal;
}


void ZooResindents::SetPlaceHabitat(const string& placeHabitatAnimal)         //метод для мзменения места обитания
{
	placeHabitat = placeHabitatAnimal;
}


void ZooResindents::SetView(const string& viewAnimal)                      //места для изменения вида животного
{
	view = viewAnimal;
}


istream& operator>>(istream& in, ZooResindents& obj)                   //перегрузка оператора ввода
{	
	cout << "введите кличку: ";
	in>>obj.name;

	cout << "введите место обитания: ";
	in>>obj.placeHabitat;

	cout << "введите вид животного: ";
	in>>obj.view;
		
	return in;
}


ostream& operator<<(ostream& out, ZooResindents& obj)                  //перегрузка оператора вывода
{
	out << "|" << setw(20) << obj.name
		<< "|" << setw(18) << obj.placeHabitat
		<< "|" << setw(16) << obj.view;

	return out;
}


ZooResindents& ZooResindents:: operator=(const ZooResindents& obj)       //перегрузка оператора присваивания
{
	if (this != &obj)
	{
		name = obj.name;
		placeHabitat = obj.placeHabitat;
		view = obj.view;
	}

	return *this;
}

void ZooResindents::ShowMenu()                                        //виртуальная функция демонстрации меню
{
	cout << MAGENTA << "______МЕНЮ______" << endl
		<< RED << "0." << RESET << " ВЫЙТИ" << endl
		<< MAGENTA<<"1." << RESET << " Вывести объект" << endl
		<< CYAN << "2." << RESET << " Изменить кличку" << endl
		<< CYAN << "3." << RESET << " Изменить место обитания" << endl
		<< CYAN << "4." << RESET << " Изменить вид животного" << endl
		<< GREEN << "5." << RESET << " Получить кличку" << endl
		<< GREEN << "6." << RESET << " Получить место обитания" << endl
		<< GREEN << "7." << RESET << " Получить вид животного" << endl;
}


void ZooResindents::ShowTableHeader()                                   //виртуальный метод демонстрации шапки таблицы
{
	cout<< "|" << setw(20) << "кличка животного"
		<< "|" << setw(18) << "место обитания"
		<< "|" << setw(16) << "вид животного";
}

