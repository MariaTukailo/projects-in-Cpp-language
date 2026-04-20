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
        cout << MAGENTA << "С каким классом хотите работать?" << endl << RESET
            << GREEN << "1." << RESET << "Хищник" << endl
            << GREEN << "2." << RESET << "Травоядное" << endl
            << GREEN << "3." << RESET << "Птица" << endl
            << RED << "0." << RESET << "Выход" << endl;

        int number = enterNumberLIMITS_INT(cin, 0, 3);
        if (number == 1)
        {
            Menu<Pretador> manager;
            manager.mainMenu();
            break;
        }
        else if (number == 2)
        {
            Menu<Herbivore> manager;
            manager.mainMenu();
            break;
        }
        else if (number == 3)
        {
            Menu<Bird> manager;
            manager.mainMenu();
            break;
        }
    }
    return 0;
}