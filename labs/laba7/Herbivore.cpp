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
	cout << endl << GREEN << "Любимая еда животного:" << RESET << endl;
	obj.favoriteFood = enterStrRUS(in);
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

ifstream& operator>>(ifstream& in, Herbivore& obj)
{
	in >> static_cast<Mammal&>(obj);
	getline(in, obj.favoriteFood);
	return in;
}

ofstream& operator<<(ofstream& out, Herbivore& obj)
{
	out << static_cast<Mammal&>(obj);
	out << obj.favoriteFood << endl;
	return out;
}

// Перегрузка оператора записи в бинарный файл для Herbivore
fstream& operator<<(fstream& out, const Herbivore& herbivore)
{
    // Записываем базовую часть (Mammal)
    out << static_cast<const Mammal&>(herbivore);

    // Записываем favoriteFood
    int len = static_cast<int>(herbivore.favoriteFood.size());
    out.write(reinterpret_cast<const char*>(&len), sizeof(len));
    out.write(herbivore.favoriteFood.c_str(), len);

    return out;
}

// Перегрузка оператора чтения из бинарного файла для Herbivore
fstream& operator>>(fstream& in, Herbivore& herbivore)
{
    // Читаем базовую часть (Mammal)
    in >> static_cast<Mammal&>(herbivore);

    // Читаем favoriteFood
    int len;
    in.read(reinterpret_cast<char*>(&len), sizeof(len));
	    herbivore.favoriteFood.resize(len);
	in.read(&herbivore.favoriteFood[0], len);

    return in;
}