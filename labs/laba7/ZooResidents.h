#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include "MyExceptionsGeneral.h"
#include <fstream>
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


	ZooResindents(const string& nameAnimal = "", const string& placeHabitatAnimal = "", const string& viewAnimal = "")       //конструктор с параметрами совмещенный с конструктором по умолчанию
	{
		name = nameAnimal;
		placeHabitat = placeHabitatAnimal;
		view = viewAnimal;

	}
	ZooResindents(const ZooResindents& other)                      //конструктор копирования
	{
		name = other.name;
		placeHabitat = other.placeHabitat;
		view = other.view;
	}
	~ZooResindents()         //деструктор
	{

	}

	const string& GetName() const;           //метод для получения клички
	const string& GetPlaceHabitat() const;   //метод для получения места обитания
	const string& GetView() const;           //метод для получения вида животного

	void SetName(const string& nameAnimal);                   //метод для изменения клички
	void SetPlaceHabitat(const string& placeHabitatAnimal);   //метод для мзменения места обитания
	void SetView(const string& viewAnimal);                   //места для изменения вида животного

	friend istream& operator>>(istream& in, ZooResindents& obj);  //перегрузка оператора ввода
	friend ostream& operator<<(ostream& out, ZooResindents& obj); //перегрузка оператора вывода
	ZooResindents& operator=(const ZooResindents& obj);           //перегрузка оператора присваивания
	bool operator==(const  ZooResindents& obj);                   //перегрузка оператора сравнения

	friend ifstream& operator>>(ifstream& in, ZooResindents& obj);
	friend ofstream& operator<<(ofstream& out, ZooResindents& obj);

	friend fstream& operator<<(fstream& out, const ZooResindents& resident);
	friend fstream& operator>>(fstream& in, ZooResindents& resident);

	bool operator<(const ZooResindents& other) const;

	virtual void ShowMenu();                     //виртуальная функция демонстрации меню
	virtual void ShowTableHeader();              //виртуальный метод демонстрации шапки таблицы
};