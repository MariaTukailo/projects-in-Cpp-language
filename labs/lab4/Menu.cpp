#pragma once
#include "Menu.h"
template <class T>
void Menu<T>::printMenu()   //вывод опций меню
{
    cout << MAGENTA << endl << "------ МЕНЮ------" << endl
        << CYAN << "1." << RESET << " Добавить объект" << endl
        << CYAN << "2." << RESET << " Удалить объект" << endl
        << CYAN << "3." << RESET << " Посмотреть кольцо" << endl
        << CYAN << "4." << RESET << " Поиск по параметрам" << endl
        << CYAN << "5." << RESET << " Отсортировать кольцо" << endl
        << CYAN << "6." << RESET << " Очистить кольцо" << endl
        << RED << "7." << RESET << " ВЫЙТИ" << endl;
}


template <class T>
T Menu<T>::inputSearchParams()   // ввод параметров для поиска
{
    string name, PlaceHabitat, typeAnimal;

    cout << CYAN << "Введите имя (или " << GREEN << "0" << CYAN << ", если хотите пропустить параметр): " << RESET;
    cin >> name;
    
    cout << CYAN << "Введите место обитания (или " << GREEN << "0" << CYAN << ", если хотите пропустить параметр): " << RESET;
    cin >> PlaceHabitat;
    
    cout << CYAN << "Введите тип (или " << GREEN << "0" << CYAN << ", если хотите пропустить параметр): " << RESET;
    cin >> typeAnimal;
    
    T buffOBJ(name, PlaceHabitat, typeAnimal);
    return buffOBJ;
}

   
template <class T>  
void  Menu<T>::MenuRealization()   //реализация меню
{
        while (true)
        {
            printMenu();
            cout << GREEN << "Выберите опцию: " << RESET;
            int choice;
            cin >> choice;

            if (choice == 1)
            {
                T newAnimal;
                cin >> newAnimal;
                ring.add(newAnimal);
            }
            else if (choice == 2)
            {
                ring.remove();
                cout << GREEN << "Удаление выполнено успешно! " << RESET;
            }
            else if (choice == 3)
            {
                T().ShowTableHeader();
                ring.see();
            }
            else if (choice == 4)
            {
                T buffOBJ = inputSearchParams();
                cout << endl << GREEN << "Результаты поиска:" << RESET << endl;
                T().ShowTableHeader();
                ring.findForParam(buffOBJ).see();
            }
            else if (choice == 5)
            {
                bool (*animalSortFuncs[])(const T&, const T&) = { SortByName<T>, SortByViev<T> };
                int number;
                cout << CYAN << endl << "--- ВЫБОР СОРТИРОВКИ--- " << RESET << endl
                    << "1. По имени" << endl
                    << "2. По виду" << endl
                    << "Выберите вариант: ";
                cin >> number;

                ring.sortByParam(animalSortFuncs[number - 1]);
                cout << endl << GREEN << "Результаты сортировки:" << RESET << endl;
                T().ShowTableHeader();
                ring.see();
            }
            else if (choice == 6)
            {
                ring.clearRing();
            }
            else if (choice == 7)
            {
                cout << RED << "Выход из меню..." << RESET << endl;
                break;
            }
            else
            {
                cout << RED << "Неверный выбор!" << RESET << endl;
            }
        }
}


