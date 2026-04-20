#include "Herbivore.h"
using namespace std;

string& Herbivore::GetFavoriteFood()     //метод получения поля любимой еды
{
	return favoriteFood;
}

void Herbivore::SetFavoriteFood(const string& favoriteFoodAnimal)  //метод изменения поля любимой еды    
{
	favoriteFood = favoriteFoodAnimal;
	
}


istream& operator>>(istream& in, Herbivore& obj)      //перегрзка оператора ввода
{
	in >> static_cast<Mammal&>(obj);

	cout << "введите любимую еду: ";
	in>>obj.favoriteFood;

	return in;
}


ostream& operator<<(ostream& out, Herbivore& obj)      //перегрузка оператора вывода
{
	out << static_cast<Mammal&>(obj);
	out << "|" << setw(14) << obj.favoriteFood << endl;

	return out;
}


Herbivore& Herbivore::operator=(const Herbivore& obj)   //перегрузка оператора присваивания
{
	if (this != &obj)
	{
		Mammal::operator = (obj);
		favoriteFood=obj.favoriteFood;
	}

	return *this;

}


void Herbivore::ShowMenu()   //виртуальная функция вывода меню
{
	Mammal::ShowMenu();
	cout << CYAN << "12." << RESET << " Изменить любимую еду" << endl;
	cout << GREEN << "13." << RESET << " Получить любимую еду" << endl;

}


void Herbivore::ShowTableHeader()                   //виртуальная функция демонстрации шапки таблицы
{
	Mammal::ShowTableHeader();
	cout << "|" << setw(14) << "любимая еда";
}


void MenuForRealization(Herbivore obj)
{
	while (1)
	{
		obj.ShowMenu();
		int choice;
		cin >> choice;
		string buffer;
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		switch(choice)
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
