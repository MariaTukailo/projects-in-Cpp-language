#pragma once
#include "ZooResidents.h"
using namespace std;


class Mammal :public ZooResindents //класс млекопитающее , наследуемый от класса обитатель зоопарка 
{
protected:

	int comfortableTemperature; //поле комфортная температура
	string furType;              //поле тип шерсти 

public:

	Mammal() :ZooResindents()      //конструктор без параметров
	{
		comfortableTemperature = 0;
	}
	Mammal(const string& nameAnimal, const string& placeHabitatAnimal, const string& viewAnimal, const string furTypeAnimal, int comfortableTemperatureAnimaL) : //конструктор с параметрами
	ZooResindents(nameAnimal, placeHabitatAnimal, viewAnimal)
	{
		comfortableTemperature = comfortableTemperatureAnimaL;
		furType = furTypeAnimal;	
	}
	Mammal(const Mammal& other) :ZooResindents(other)                       //конструктор копирования
	{
		comfortableTemperature = other.comfortableTemperature;
		furType = other.furType;
	}
	~Mammal()         //деструктор
	{}

	int GetComfortableTemperature();   //метод получения комфортной температуры
	string& GetFurType();                //метод получения типа шерсти

	void SetComfortableTemperature(int comfortableTemperatureAnimaL);   //метод изменения комфортной температуры
	void SetFurType(const string& furTypeAnimal);                       //метод изменения типа шерсти

	friend istream& operator>>(istream& in, Mammal& obj);        //пергрузка оператора ввода
	friend ostream& operator<<(ostream& out, Mammal& obj);       //перегрузка оператора вывода
	Mammal& operator=(const Mammal& obj);                        //перегрузка оператора присваивания

	virtual void ShowMenu() override;                            //виртуальная функция меню
	virtual void ShowTableHeader() override;                     //виртуальный метод демонстрации шапки таблицы

};