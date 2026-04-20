#pragma once
#pragma once
#include <iostream>
#include "ZooResidents.h"
#include <cstring>
using namespace std;

class Bird : public ZooResindents     //класс птица, наследуемый от обитатель зоопарка
{
protected:

	double wingspan;  //размах крыльев

public:

	Bird() :ZooResindents()  //конструктор без параметров
	{
		wingspan = 0;
	}
	Bird(const string& nameAnimal, const string& placeHabitatAnimal, const string& viewAnimal, double wingspanBird) : //конструктор с параметрами
	ZooResindents(nameAnimal, placeHabitatAnimal, viewAnimal)
	{
		wingspan = wingspanBird;
	}
	Bird(const Bird& other) :ZooResindents(other)     //конструктор копирования 
	{
		wingspan = other.wingspan;
	}
	~Bird()          //деструктор
	{}

	double GetWingspan();                   //метод для получения размаха крыльев
	void SetWingspan(double wingspanBird);  //метод для изменения размаха крыльев


	friend istream& operator>>(istream& in, Bird& obj);   //перегрузка оператора ввода
	friend ostream& operator<<(ostream& out, Bird& obj);  //перегрузка оператора вывода
	Bird& operator=(const Bird& obj);                     //перегрузка оператора присваивания               


	virtual void ShowMenu() override;                          //виртуальный метод меню
	virtual void ShowTableHeader() override;                   //виртуальный метод демонстрации шапки таблицы
};

void MenuForPretador(Bird obj);