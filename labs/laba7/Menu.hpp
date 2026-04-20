#pragma once
#include "Algoritm.h"
#include <iostream>
template <class T>
void Menu<T>::printMenu()  // вывод опций меню
{
    cout << MAGENTA << endl << "------ МЕНЮ------" << endl
        << CYAN << "1." << RESET << " Добавить объект" << endl
        << CYAN << "2." << RESET << " Удалить объект" << endl
        << CYAN << "3." << RESET << " Посмотреть кольцо" << endl
        << CYAN << "4." << RESET << " Поиск по параметрам" << endl
        << CYAN << "5." << RESET << " Отсортировать кольцо" << endl
        << CYAN << "6." << RESET << " Очистить кольцо" << endl
        << CYAN << "7." << RESET << " Считать данные из текстового файла" << endl
        << CYAN << "8." << RESET << " Считать данные из бинарного файла" << endl
        << CYAN << "9." << RESET << " Загрузить данные в текстовый файл" << endl
        << CYAN << "10." << RESET << "Загрузить данные в бинарный файл" << endl
        << RED << "0." << RESET << " ВЫЙТИ" << endl;
}

template <class T>
T Menu<T>::inputSearchParams()  // ввод параметров для поиска
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
string Menu<T>::GetTXTFilename() const
{
    if (typeid(T) == typeid(Bird))
    {
        return "birds.txt";
    }
    else if (typeid(T) == typeid(Pretador))
    {
        return "predators.txt";
    }
    else if (typeid(T) == typeid(Herbivore))
    {
        return "herbivores.txt";
    }
    return "";
}

template <class T>
string Menu<T>::GetBinFilename() const
{
    if (typeid(T) == typeid(Bird))
    {
        return "birds.bin";
    }
    else if (typeid(T) == typeid(Pretador))
    {
        return "predators.bin";
    }
    else if (typeid(T) == typeid(Herbivore))
    {
        return "herbivores.bin";
    }
    return "";
}

template <class T>
void Menu<T>::SaveToBinFile()
{
    if (ring.isEmpty())
    {
        cout << RED << "Кольцо пустое!" << RESET << endl;
        return;
    }

    FileBin<T> binFile(GetBinFilename());
    binFile.ClearFile();

    for (int i = 0; i < ring.GetSize(); i++)
    {
        binFile.Write(ring.Get(i));
    }

    cout << GREEN << "Данные сохранены в бинарный файл!" << RESET << endl;
}

template <class T>
void Menu<T>::LoadFromTXTFile()
{
    FileTXT<T> txtFile(GetTXTFilename());

    if (!txtFile.openInput())
    {
        cout << RED << "Не удалось открыть файл!" << RESET << endl;
        return;
    }

    ring.clearRing();
    T obj;

    while (txtFile.read(obj))
    {
        ring.add(obj);
    }

    cout << GREEN << "Данные загружены из текстового файла!" << RESET << endl;
}

template <class T>
void Menu<T>::SaveToTXTFile()
{
    if (ring.isEmpty())
    {
        cout << RED << "Кольцо пустое!" << RESET << endl;
        return;
    }

    FileTXT<T> txtFile(GetTXTFilename());

    if (!txtFile.openOutput())
    {
        cout << RED << "Не удалось создать файл!" << RESET << endl;
        return;
    }

    for (int i = 0; i < ring.GetSize(); i++)
    {
        txtFile.write(ring.Get(i));
    }

    cout << GREEN << "Данные сохранены в текстовый файл!" << RESET << endl;
}

template <class T>
void Menu<T>::LoadFromBinFile()
{
    FileBin<T> binFile(GetBinFilename());

    if (!binFile.IsOpen())
    {
        cout << RED << "Файл не найден!" << RESET << endl;
        return;
    }

    ring.clearRing();
    T obj;

    binFile.SeekToBegin();

    while (binFile.Read(obj))
    {
        ring.add(obj);
    }

    cout << GREEN << "Данные загружены из бинарного файла!" << RESET << endl;
}


template <class T>
void Menu<T>::MenuRealization()  // реализация меню
{
    while (true)
    {
        printMenu();
        cout << GREEN << "Выберите опцию: " << RESET;
        int choice = enterNumberLIMITS_INT(cin, 0, 10);
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (choice == 1)
        {
            T newAnimal;
            cin >> newAnimal;
            ring.add(newAnimal);
        }
        else if (choice == 2)
        {
            int id;
            cout << "  ";
            T().ShowTableHeader();
            ring.see();
            cout << GREEN << "Какой объект хотите удалить? "<<endl << RESET;
            id = enterNumberLIMITS_INT(cin, 0, ring.GetSize() - 1);
            ring.remove(id);
            cout << GREEN << "Удаление выполнено успешно! " << RESET;
        }
        else if (choice == 3)
        {
            cout << "  ";
            T().ShowTableHeader();
            ring.see();
        }
        else if (choice == 4)
        {
            T buffOBJ = inputSearchParams();

            priority_queue<T> foundResults = Algorithm<T>::find(
                ring.begin(),
                ring.end(),
                buffOBJ
            );

            cout << endl << GREEN << "Результаты поиска:" << RESET << endl;

            if (foundResults.empty())
            {
                cout << RED << "Ничего не найдено!" << RESET << endl;
            }
            else
            {
                T().ShowTableHeader();
                priority_queue<T> temp = foundResults;
                while (!temp.empty()) {
                    T obj = temp.top();
                    cout << endl << obj;
                    temp.pop();
                }
            }
        }
        else if (choice == 5)
        {
            bool (*sortFuncs[])(const T&, const T&) = {
                
                [](const T& a, const T& b) -> bool {
                 
                    return   a.GetName() > b.GetName();
                },
              
                [](const T& a, const T& b) -> bool {
                    return a.GetView() > b.GetView();
                }
            };
            int number;
            cout << CYAN << endl << "--- ВЫБОР СОРТИРОВКИ--- " << RESET << endl
                << "1. По имени" << endl
                << "2. По виду" << endl
                << "Выберите вариант: ";
            cin >> number;

            Algorithm<T>::sort(
                ring.begin(),
                ring.end(),
                sortFuncs[number - 1]
            );
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
            LoadFromTXTFile();
        }
        else if (choice == 8)
        {
            LoadFromBinFile();
        }
        else if (choice == 9)
        {
            SaveToTXTFile();
        }
        else if (choice == 10)
        {
            SaveToBinFile();
        }
        else if (choice == 0)
        {
            cout << RED << "Выход из меню..." << RESET << endl;
            break;
        }
    }
}

template <class T>
void Menu<T>::mainMenu()
{
    while (true)
    {
        cout << MAGENTA << endl<<"=== ВЫБЕРИТЕ КОНТЕЙНЕР ===" << RESET << endl;
        cout << CYAN << "1." << RESET << " Ring (кольцо)" << endl;
        cout << CYAN << "2." << RESET << " PriorityQueue (очередь с приоритетом)" << endl;
       
        cout << GREEN << "Выберите: " << RESET;

        int choice = enterNumberLIMITS_INT(cin, 1, 2);

        
        if (choice == 1) {
            MenuRealization();
        }
        else if (choice == 2) {
            queueOperations(); 
        }
    }
}


template <class T>
void Menu<T>::printQueueMenu()
{
    cout << MAGENTA <<endl<< "=== МЕНЮ PRIORITY QUEUE ===" << RESET << endl;
    cout << CYAN << "1." << RESET << " Добавить (push)" << endl;
    cout << CYAN << "2." << RESET << " Удалить верхний (pop)" << endl;
    cout << CYAN << "3." << RESET << " Просмотреть все" << endl;
    cout << CYAN << "4." << RESET << " Очистить" << endl;
    cout << RED << "0." << RESET << " НАЗАД в главное меню" << endl;
    cout << GREEN << "Выберите: " << RESET;
}

template <class T>
void Menu<T>::queueOperations()
{
    while (true)
    {
        printQueueMenu();  

        int choice = enterNumberLIMITS_INT(cin, 0, 4);
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (choice == 0) break;

        if (choice == 1) {
            T obj;
            cout << "Введите объект: ";
            cin >> obj;
            queue.push(obj);
            cout << GREEN << "Добавлено!" << RESET << endl;
        }
        else if (choice == 2) {
            if (queue.empty()) {
                cout << RED << "Очередь пуста!" << RESET << endl;
            }
            else {
                
                queue.pop();
                cout << GREEN << " Удалено" << RESET << endl;
            }
        }
        else if (choice == 3) {
            if (queue.empty()) {
                cout << RED << "Очередь пуста!" << RESET << endl;
            }
            else {
                cout << CYAN << "Все объекты в очереди:" << RESET << endl;
                T().ShowTableHeader();

                auto temp = queue;
                while (!temp.empty()) {
                    T obj = temp.top();
                    cout<<endl<<obj;
                    temp.pop();
                }
            }
        }
        
        else if (choice == 4) {
            while (!queue.empty()) {
                queue.pop();
            }
            cout << GREEN << " Очередь очищена!" << RESET << endl;
        }
    }
}