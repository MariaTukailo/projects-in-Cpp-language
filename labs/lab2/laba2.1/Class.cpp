#include <iostream>
#include <cstdlib>
#include <limits>
#include "Class.h"


using namespace std;


int Array::GetSize()                                                         //получение размера
{
    return size;

}


Array& Array:: operator=(const Array& other)                                 //перегрузка оператора присваивания
{

    if (this != &other)
    {
        delete[] array;

        size = other.size;
        if (size == 0) {
            array = NULL;
        }
        else {
            array = new int[size];
            for (int i = 0; i < size; i++)
            {
                array[i] = other.array[i];
            }
        }
    }
    return *this;

}


Array Array :: operator * (const Array& array)                           //нахождение пересечения массивов
{

    Array intersection(*this);


    for (int x = 0; x < intersection.size; x++)
    {
        for (int y = 0; y < array.size; y++)
        {
            if (intersection.array[x] == array.array[y])
            {
                break;

            }
            else if (y == array.size - 1)
            {
                int buffElement = intersection.array[x];
                Array buffArray(intersection.size - 1);
                for (int j1 = 0, j2 = 0; j1 < intersection.size; j1++, j2++)
                {
                    if (intersection.array[j1] == buffElement)
                    {
                        j2--;

                    }
                    else
                    {

                        buffArray.array[j2] = intersection.array[j1];

                    }

                }


                intersection = buffArray;
                x--;
                break;

            }
        }

    }


   return  intersection;
    
}


istream&  operator>>(istream& in, Array& array)                            //перегрузка оператора ввода
{
    for (int i = 0; i < array.size; i++)
    {
      
        in >> array.array[i];
    }

    return in;
}


ostream& operator<<(ostream& out, const Array& array)                     //перегрузка оператора вывода
{

    for (int i = 0; i < array.size; i++)
    {
        out << array.array[i] << " ";
    }

    return out;

}

