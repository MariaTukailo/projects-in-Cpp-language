#pragma once
#include <iostream>
#include "Ring.h"
#include "Pretador.h"
#include "Herbivore.h"
#include "Bird.h"
#include"fun.h"
using namespace std;

template <class T>
class Menu
{
private:
    Ring<T> ring;
public:
        
    void printMenu();//метод для печати меню
    T inputSearchParams(); //метод для ввода параметров для поиска
    void MenuRealization(); // метод реализация меню
        


};




#include"Menu.cpp"