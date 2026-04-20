#pragma once
#include "Mammal.h"
using namespace std;

class Herbivore :public Mammal     //класс травоядное, наследуемый от млекопитающего
{
protected:

	string favoriteFood;      //поле любимая еда

public:

	Herbivore(const string& nameAnimal = "", const string& placeHabitatAnimal = "", const string& viewAnimal = "", const string& furTypeAnimal = "", int comfortableTemperatureAnimaL = 0, const string& favoriteFoodAnimal = "") :  //конструктор с параметрами совмещенный с конструктором по умолчанию
		Mammal(nameAnimal, placeHabitatAnimal, viewAnimal, furTypeAnimal, comfortableTemperatureAnimaL)
	{
		favoriteFood = favoriteFoodAnimal;
	}
	Herbivore(const Herbivore& other) :Mammal(other)                       //конструкторикопирования
	{
		favoriteFood = other.favoriteFood;

	}
	~Herbivore()                    //деструктор
	{

	}

	string& GetFavoriteFood();                         //Получить значение поля любимая еда
	void SetFavoriteFood(const string& favoriteFoodAnimal);  //изменить поле любимая еда

	friend istream& operator>>(istream& in, Herbivore& obj);   //перегрузка оператора ввода
	friend ostream& operator<<(ostream& out, Herbivore& obj);  //перегрузка оператора вывода
	Herbivore& operator=(const Herbivore& obj);                //перегрузка оператора присваивания

	friend ifstream& operator>>(ifstream& in, Herbivore& obj);
	friend ofstream& operator<<(ofstream& out, Herbivore& obj);

	friend fstream& operator<<(fstream& out, const Herbivore& resident);
	friend fstream& operator>>(fstream& in, Herbivore& resident);

	virtual void ShowMenu() override;                          //виртуальная функция меню
	virtual void ShowTableHeader() override;                   //виртуальный метод демонстрации шапки таблицы
};

