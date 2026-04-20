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
	in >> obj.favoriteFood;

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
		favoriteFood = obj.favoriteFood;
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


