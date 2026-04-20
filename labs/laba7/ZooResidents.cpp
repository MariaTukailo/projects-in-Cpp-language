#include "ZooResidents.h"
using namespace std;

const string& ZooResindents::GetName() const      //метод для получения клички
{
	return name;
}


const string& ZooResindents::GetPlaceHabitat() const       //метод для получения места обитания
{
	return placeHabitat;
}


const string& ZooResindents::GetView()  const              //метод для аолучения вида животного
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
	cout << endl<<GREEN<<"Имя животного:"<<RESET << endl;
	obj.name= InputNameRUS(in);
	cout << endl << GREEN<<"Тип животного:" << RESET << endl;
	obj.placeHabitat= InputWordRUS(in);
	cout << endl << GREEN<<"Место обитания животного:" << RESET << endl;
	obj.view= InputWordRUS(in);

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

bool ZooResindents::operator==(const  ZooResindents& obj)                 //перегрузка оператора сраванения
{
	return (obj.name == "0" || obj.name == name) &&
		(obj.placeHabitat == "0" || obj.placeHabitat == placeHabitat) &&
		(obj.view == "0" || obj.view == view);
}


void ZooResindents::ShowMenu()                                        //виртуальная функция демонстрации меню
{
	cout << MAGENTA << "______МЕНЮ______" << endl
		<< RED << "0." << RESET << " ВЫЙТИ" << endl
		<< MAGENTA << "1." << RESET << " Вывести объект" << endl
		<< CYAN << "2." << RESET << " Изменить кличку" << endl
		<< CYAN << "3." << RESET << " Изменить место обитания" << endl
		<< CYAN << "4." << RESET << " Изменить вид животного" << endl
		<< GREEN << "5." << RESET << " Получить кличку" << endl
		<< GREEN << "6." << RESET << " Получить место обитания" << endl
		<< GREEN << "7." << RESET << " Получить вид животного" << endl;
}


void ZooResindents::ShowTableHeader()                                  
{
	cout << "|" << setw(20) << "кличка животного"
		<< "|" << setw(18) << "место обитания"
		<< "|" << setw(16) << "вид животного";
}

ifstream& operator>>(ifstream& in, ZooResindents& obj)
{
	getline(in, obj.name, ';');
	getline(in, obj.placeHabitat, ';');
	getline(in, obj.view, ';');
	return in;
}

ofstream& operator<<(ofstream& out, ZooResindents& obj)
{
	out << obj.name << ';' << obj.placeHabitat << ';' << obj.view << ';';
	return out;
}

fstream& operator<<(fstream& out, const ZooResindents& resident)
{
    int len;
	 
    len = static_cast<int>(resident.name.size());
    out.write(reinterpret_cast<const char*>(&len), sizeof(len));
    out.write(resident.name.c_str(), len);

    len = static_cast<int>(resident.placeHabitat.size());
    out.write(reinterpret_cast<const char*>(&len), sizeof(len));
    out.write(resident.placeHabitat.c_str(), len);

    len = static_cast<int>(resident.view.size());
    out.write(reinterpret_cast<const char*>(&len), sizeof(len));
    out.write(resident.view.c_str(), len);

    return out;
}


fstream& operator>>(fstream& in, ZooResindents& resident)
{
    int len;
	 
    if (!in.read(reinterpret_cast<char*>(&len), sizeof(len)))
    {
        in.setstate(ios::failbit);
        return in;
    }
    resident.name.resize(len);
    in.read(&resident.name[0], len);

	if (!in.read(reinterpret_cast<char*>(&len), sizeof(len)))
	{
		in.setstate(ios::failbit);
		return in;
	}
    resident.placeHabitat.resize(len);
    in.read(&resident.placeHabitat[0], len);

	if (!in.read(reinterpret_cast<char*>(&len), sizeof(len)))
	{
		in.setstate(ios::failbit);
		return in;
	}
    resident.view.resize(len);
    in.read(&resident.view[0], len);
    return in;
}

bool ZooResindents::operator<(const ZooResindents& other) const {
	
	return name < other.name;
	
}