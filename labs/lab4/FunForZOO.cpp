#include "FunForZOO.h"

void MenuForRealization(Pretador obj) //функция для проверки геттеров и сеттеров для класса хищник
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

void MenuForRealization(Herbivore obj) //функция для проверки геттеров и сеттеров для класса травоядное
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

			cout << "введите новую любимую еду : ";
			cin >> buffer;
			obj.SetFavoriteFood(buffer);
			break;


		case 13:
			cout << "любимая еда : " << obj.GetFavoriteFood() << endl;
			break;

		}

	}

}

void MenuForPretador(Bird obj)//функция для проверки геттеров и сеттеров для класса птица
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

