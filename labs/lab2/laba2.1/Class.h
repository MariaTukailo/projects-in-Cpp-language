#include <iostream>

using namespace std;

class Array
{

private:

    int* array;
    int size;

public:


    Array(int sizeArray = 0)                                               //конструктор по умолчанию совмещенный с конструкторм с параметром
    {

        size = sizeArray;

        if (size != 0)
        {
            array = new int[size];
            if (array == NULL)
            {

                exit(1);
            }
        }
        else
        {
            array = NULL;
        }

    }

    Array(const Array& other)                                                 //конструктор копирования
    {
        size = other.size;
        array = new int[size];

        for (int i = 0; i < size; i++)
        {
            array[i] = other.array[i];
        }

    }

    ~Array()                                                                   //деструктор                                                             
    {
        delete[] array;

    }


    int GetSize();                                                             //получение размера


    Array& operator=(const Array& other);                                       // перегрузка оператора присваивания
    Array operator * (const Array& array);                                    //нахождение пересечения массивов


    friend istream& operator>>(istream& in, Array& array);                      //перегрузка оператора ввода массива 
    friend ostream& operator<<(ostream& out, const Array& array);                //перегрузка оператора вывода массива


};