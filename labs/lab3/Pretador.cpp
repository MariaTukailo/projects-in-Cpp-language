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


Pretador& Pretador::operator=(Pretador& obj)                       //перегрузка оператора присваивания
{
	if (this != &obj)
	{
		Mammal::operator= (obj);
		dangerLevel=obj.dangerLevel;
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

void MenuForRealization(Pretador obj)
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
			cout << "введите новую комфортную температуру : ";
			int t;
			cin >> t;
			obj.SetComfortableTemperature(t);
			break;

		case 9:
			cout << "введите новый тип шерсти : ";
			cin >> buffer;
			obj.SetFurType(buffer);
			break;

		case 10:
			cout << "комфортная температура : " << obj.GetComfortableTemperature() << endl;
			break;

		case 11:
			cout << "тип шерсти : " << obj.GetFurType() << endl;
			break;

		case 12:
			cout << "введите новый уровень опасности(0-10) : ";
			int danger;
			cin >> danger;
			obj.SetDangerLevel(danger);
			break;

		case 13:
			cout << "уровень опасности : " << obj.GetDangerLevel() << endl;
			break;

		}
	}

}