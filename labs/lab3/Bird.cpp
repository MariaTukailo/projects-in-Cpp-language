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
	out << "|" << setw(18) << obj.wingspan << endl;

	return out;
}


Bird& Bird::operator=(const Bird& obj)    //перегрузка оператора присваивания
{
	if (this != &obj)
	{
		ZooResindents::operator =(obj);
		wingspan=obj.wingspan;
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
	cout << "|" << setw(18) << "размах крыльев";

}

void MenuForPretador(Bird obj)
{
	while (1)
	{
		obj.ShowMenu();
		int choice;
		cin >> choice;
		string buffer;
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		switch (choice)
		{
		case 0:
			return;

		case 1:
			obj.ShowTableHeader();
			cout << endl << obj << endl;
			break;

		case 2:
			cout << "введите новую кличку : ";
			cin >> buffer;
			obj.SetName(buffer);
			break;

		case 3:
			cout << "введите новое место обитания : ";
			cin >> buffer;
			obj.SetPlaceHabitat(buffer);
			break;

		case 4:
			cout << "введите новый вид животного : ";
			cin >> buffer;
			obj.SetView(buffer);
			break;

		case 5:
			cout << "кличка : " << obj.GetName() << endl;
			break;

		case 6:
			cout << "место обитания: " << obj.GetPlaceHabitat() << endl;
			break;

		case 7:
			cout << "вид животного: " << obj.GetView() << endl;
			break;

		case 8:
			cout << "введите новый размах крыльев : ";
			int t;
			cin >> t;
			obj.SetWingspan(t);
			break;

		case 9:
			cout << "размах крыльев : " << obj.GetWingspan() << endl;

			break;

		}
	}

}