#include "ZooResidents.h"
#include "Bird.h"
#include "Mammal.h"
#include "Pretador.h"
#include "Herbivore.h"


using namespace std;



int main()
{
	system("chcp 1251>nul");
	Pretador pretador[2];                                           //создание  массива объектов

	cout << CYAN << "Создан массив объектов класса хищник на 2 объекта" << RESET << endl;
	cout << endl << "Введём данные :" << endl;
	Pretador otherPretador;
	for (int i = 0; i < 2; i++)                                    //цикл ввода данных
	{
		cin >> otherPretador;
		pretador[i] = otherPretador;                               //проверка работы перегруженного оператора присваивания
		cout << endl;
	}

	pretador[0].ShowTableHeader();                                 //вывод шапики с помощью виртуального метода
	for (int i = 0; i < 2; i++)
	{
		cout << endl << pretador[i];                                       //вывод объекта с помощью перегруженного оператора вывода
	}

	cout << endl << CYAN << "Проверка рабботы геттеров и сеттеров:" << MAGENTA << " Выберите с каким объектом хотите работать (1 или 2) ?" << RESET << endl;
	int choice;
	cin >> choice;
	MenuForRealization(pretador[choice]);                                                          //демонстрация работы геттеров и сеттеров 

	return 0;

}