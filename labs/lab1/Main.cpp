#include <iostream>
#include <cstdlib>
#include "Class.h"

using namespace std;

#define RESET    "\033[0m"
#define RED      "\033[31m"
#define GREEN    "\033[32m"
#define YELLOW   "\033[33m"
#define BLUE     "\033[34m"
#define MAGENTA  "\033[35m"
#define CYAN     "\033[36m"
#define WHITE    "\033[37m"


int main()
{
    system("chcp 1251>nul");


    cout << "_______________________________________" << endl;                                        // главное меню
    cout << "|                                     |" << endl;
    cout << "|" << MAGENTA << " Программа для пересечения массивов: " << RESET << "|" << endl;
    cout << "|_____________________________________|" << endl;


    Array intersection;                                                                               //создание объекта для пересечения с вызовом конструктора без параметра                                                                         
    int numberArray;

    cout << GREEN << "Введите количество массивов, которые вы хотите пересечь" << RESET << endl;     //ввод количества массивов
    cin >> numberArray;


    for (int i = 0; i < numberArray; i++)                                                            
    {
        int sizeArray = 0;
        cout << GREEN << "Введите размер массива: " << i + 1 << RESET << endl;
        cin >> sizeArray;

        Array array(sizeArray);                                                                       //создание объекта с вызовом  конструктора с параметром
        cout << GREEN << "Введите массив:" << i + 1 << " " << RESET << endl;
        array.EnteringArrayElements();
        
        if (i == 0) 
        {
            intersection = array;                                                                     //копирование первого массива в объект для пересечения c помощью перегрузки оператора =
        }
        else 
        {
            intersection =intersection.FindIntersection(array);                                                                    //нахождение пересечения при помощи перегрузки оператора *=
           
        }

        if (intersection.GetSize() == 0)
        {
            cout << RED << endl << "Нет пересечения" << RESET << endl;
            break;
        }
               
    }
  
        cout << GREEN << endl << "Пересечение массивов:" << RESET;
        intersection.OutputArray();
   
    return 0;

}

