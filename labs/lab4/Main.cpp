#include <iostream>
using namespace std;
#include "Bird.h"
#include "Pretador.h"
#include "Herbivore.h"
#include "Ring.h"
#include "Menu.h"

int main()
{
	system("chcp 1251>nul");

    while (true)
    {
        cout << MAGENTA << "С кольцом какого класса хотете работать?" << endl << RESET
            << GREEN << "1." << RESET << "Хищник" << endl
            << GREEN << "2." << RESET << "Травоядное" << endl
            << GREEN << "3." << RESET << "Птица" << endl
            << RED << "0." << RESET << "Выход" << endl;

        int number;
        cin >> number;

        if (number == 1)
        {
            Menu<Pretador> manager;
            manager.MenuRealization();
        }
        else if (number == 2)
        {
            Menu<Herbivore> manager;
            manager.MenuRealization();
        }
        else if (number == 3)
        {
            Menu<Bird> manager;
            manager.MenuRealization();
        }
        else if (number == 0)
        {
            break;
        }
    }
	return 0;
}