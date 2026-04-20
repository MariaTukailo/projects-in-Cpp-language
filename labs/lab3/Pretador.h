#pragma once
#include "Mammal.h"
using namespace std;

class Pretador :public Mammal  //класс хищник , наследуемый от класса имлекопитающий
{

protected:

	int  dangerLevel;     //поле степень опасности

public:

	Pretador() :Mammal()   //конструктор без параметров
	{
		dangerLevel = 0;
	}
	Pretador(const string& nameAnimal, const string& placeHabitatAnimal, const string& viewAnimal, const string& furTypeAnimal, int comfortableTemperatureAnimaL, int dangerLevelAnimal) :  //конструктор с параметрами
	Mammal(nameAnimal, placeHabitatAnimal, viewAnimal, furTypeAnimal, comfortableTemperatureAnimaL)
	{
		dangerLevel = dangerLevelAnimal;

	}
	Pretador(const Pretador& other) :Mammal(other)    //конструктор копирования
	{
		dangerLevel = other.dangerLevel;
	}
	~Pretador()      //деструктор
	{}

	int GetDangerLevel();                                   //метод получения степени опасности
	void SetDangerLevel(int dangerLevelAnimal);             //метод изменения степени опасности

	friend istream& operator>>(istream& in, Pretador& obj);   //перегрузка оператора ввода
	friend ostream& operator<<(ostream& out, Pretador& obj);  //перегрузка оператора вывода
	Pretador& operator=(Pretador& obj);                       //перегрузка оператора присваивания

	virtual void ShowMenu() override;                         //виртуальная функция меню
	virtual void ShowTableHeader() override;                 //виртуальный метод демонстрации шапки таблицы

};

void MenuForRealization(Pretador obj);