#pragma once
#include "Mammal.h"
using namespace std;


class Herbivore :public Mammal     //класс травоядное, наследуемый от млекопитающего
{
protected:

	string favoriteFood;      //поле любимая еда

public:

	Herbivore() :Mammal()    //конструктор без параметров
	{}
	Herbivore(const string& nameAnimal, const string& placeHabitatAnimal, const string& viewAnimal, const string& furTypeAnimal, int comfortableTemperatureAnimaL, const string& favoriteFoodAnimal) :  //конструктор с параметрами
	Mammal(nameAnimal, placeHabitatAnimal, viewAnimal, furTypeAnimal, comfortableTemperatureAnimaL)
	{
		favoriteFood =favoriteFoodAnimal;
	}
	Herbivore(const Herbivore& other) :Mammal(other)                       //конструкторикопирования
	{
		favoriteFood = other.favoriteFood;
	}
	~Herbivore()                    //деструктор
	{}

	string& GetFavoriteFood();                         //Получить значение поля любимая еда
	void SetFavoriteFood(const string& favoriteFoodAnimal);  //изменить поле любимая еда

	friend istream& operator>>(istream& in, Herbivore& obj);   //перегрузка оператора ввода
	friend ostream& operator<<(ostream& out, Herbivore& obj);  //перегрузка оператора вывода
	Herbivore& operator=(const Herbivore& obj);                //перегрузка оператора присваивания

	virtual void ShowMenu() override;                          //виртуальная функция меню
	virtual void ShowTableHeader() override;                   //виртуальный метод демонстрации шапки таблицы
};

void MenuForRealization(Herbivore obj);