#pragma once
#include "MyExceptionsGeneral.h"
#include "Ring.h"
#include "Pretador.h"
#include "Herbivore.h"
#include "Bird.h"
#include"fun.h"
#include <queue>
#include <typeinfo>
#include "FileBin.h"
#include "FileTXT.h"
#include<iostream>
using namespace std;


template <class T>
class Menu
{
private:
    Ring<T> ring;
    priority_queue<T> queue;

public:
    void mainMenu();
    void printMenu();  // вывод опций меню
    T inputSearchParams();  // ввод параметров для поиска
    string GetTXTFilename() const;
    string GetBinFilename() const;
    void SaveToBinFile();
    void LoadFromTXTFile();
    void SaveToTXTFile();
    void LoadFromBinFile();
    void MenuRealization();  // реализация меню
    void printQueueMenu();
    void queueOperations();
};




































#include "Menu.hpp"


