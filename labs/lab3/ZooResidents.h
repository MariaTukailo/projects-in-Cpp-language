#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
using namespace std;

#define RESET    "\033[0m"
#define RED      "\033[31m"
#define GREEN    "\033[32m"
#define MAGENTA  "\033[35m"
#define CYAN     "\033[36m"

class ZooResindents       //класс обитатель зоопарка
{
protected:

	string name;           //кличка
	string placeHabitat;   //место обитания
	string view;           //вид животного

public:

	ZooResindents()        //конструктор по умолчания
	{}
	ZooResindents(const string& nameAnimal, const string& placeHabitatAnimal, const string& viewAnimal)       //конструктор с параметрами
	{
		name = nameAnimal;
		placeHabitat = placeHabitatAnimal;
		view = viewAnimal;
	}
	ZooResindents(const ZooResindents& other)                      //конструктор копирования
	{
		name = other.name;
		placeHabitat =other.placeHabitat;
		view = other.view;
	}
	~ZooResindents()         //деструктор
	{}

	string& GetName();           //метод для получения клички
	string& GetPlaceHabitat();   //метод для получения места обитания
	string& GetView();           //метод для аолучения вида животного

	void SetName(const string& nameAnimal);                   //метод для изменения клички
	void SetPlaceHabitat(const string& placeHabitatAnimal);   //метод для мзменения места обитания
	void SetView(const string& viewAnimal);                   //места для изменения вида животного

	friend istream& operator>>(istream& in, ZooResindents& obj);  //перегрузка оператора ввода
	friend ostream& operator<<(ostream& out, ZooResindents& obj); //перегрузка оператора вывода
	ZooResindents& operator=(const ZooResindents& obj);           //перегрузка оператора присваивания

	virtual void ShowMenu();                     //виртуальная функция демонстрации меню
	virtual void ShowTableHeader();              //виртуальный метод демонстрации шапки таблицы
};