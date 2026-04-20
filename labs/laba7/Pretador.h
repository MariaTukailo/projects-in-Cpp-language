#pragma once
#include "Mammal.h"
using namespace std;

class Pretador :public Mammal  //класс хищник , наследуемый от класса имлекопитающий
{

protected:

	int  dangerLevel;     //поле степень опасности

public:

	Pretador(const string& nameAnimal = "", const string& placeHabitatAnimal = "", const string& viewAnimal = "", const string& furTypeAnimal = "", int comfortableTemperatureAnimaL = 0, int dangerLevelAnimal = 0) :  //конструктор с параметрами
		Mammal(nameAnimal, placeHabitatAnimal, viewAnimal, furTypeAnimal, comfortableTemperatureAnimaL)
	{
		dangerLevel = dangerLevelAnimal;

	}
	Pretador(const Pretador& other) :Mammal(other)    //конструктор копирования
	{
		dangerLevel = other.dangerLevel;
	}
	~Pretador()      //деструктор
	{

	}

	int GetDangerLevel();                                   //метод получения степени опасности
	void SetDangerLevel(int dangerLevelAnimal);             //метод изменения степени опасности

	friend istream& operator>>(istream& in, Pretador& obj);   //перегрузка оператора ввода
	friend ostream& operator<<(ostream& out, Pretador& obj);  //перегрузка оператора вывода
	Pretador& operator=(const Pretador& obj);                       //перегрузка оператора присваивания

	friend ifstream& operator>>(ifstream& in, Pretador& obj);
	friend ofstream& operator<<(ofstream& out, Pretador& obj);

	friend fstream& operator<<(fstream& out, const Pretador& resident);
	friend fstream& operator>>(fstream& in, Pretador& resident);


	virtual void ShowMenu() override;                        //виртуальная функция меню
	virtual void ShowTableHeader() override;                 //виртуальный метод демонстрации шапки таблицы

};


