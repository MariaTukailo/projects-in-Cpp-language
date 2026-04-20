#include <iostream>

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
                                            
                                                                                    
    void EnteringArrayElements();                                               //ввод элементов массива
    void OutputArray();                                                         //вывод массива
    int  GetSize();                                                             //получение размера


    Array& operator=(const Array& other);                                       // перегрузка оператора присваивания
    Array& FindIntersection(const Array& array);                                   //нахождение пересечения массивов
    

};