#pragma once
#include <iostream>
#include <string>
#include <exception>
#include "MyExceptionInput.h"
#include "MyException.h"
#include "FunForException.h"
using namespace std;

#define RESET    "\033[0m"
#define RED      "\033[31m"

int enterNumberLIMITS_INT(istream& in, int minLim, int maxLim);                //функция для проверки ввода числа int в определенном диапазоне
double enterNumberLIMITS_DOUBLE(istream& in, double minLim, double maxLim);    //функция для проверки ввода числа double в определенном диапазоне
string InputNameRUS(istream& in);          //функция для проверки ввода  имени (только буквы, а 1 буква - заглавная)                  
string InputWordRUS(istream& in);           //функция для проверки ввода буквенной строки
string enterStrRUS(istream& in); //функция для проверки ввода русской строки
void ValidateRussianWordOrThrow(const string& str);//функция для проверки русского слова