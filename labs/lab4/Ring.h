#pragma once
#include <iostream>
#include <utility>
using namespace std;

#define RESET    "\033[0m"
#define RED      "\033[31m"
#define GREEN    "\033[32m"
#define MAGENTA  "\033[35m"
#define CYAN     "\033[36m"

template <class T>
struct Node
{
	T data;
	Node<T>* next;
	Node<T>* prev;
};

template <class T>
class Ring
{
protected:

	Node<T>* head;


public:

	Ring() : head(NULL)    // Конструктор без параметра
	{ 	}

	Ring(const T& value)	// Конструктор с параметром
	{
		add(value);

	}

	Ring(const Ring<T>& other) : head(NULL) //конструктор копирования
	{
		if (other.isEmpty())
		{
			return;
		}
		else
		{
			Node<T>* buff = other.head;
			do
			{
				add(buff->data);
				buff = buff->next;
			} while (buff != other.head);
		}
	}

	~Ring()      //деструктор
	{
		clearRing();
	}

	void see();					//посмотреть кольцо
	void add(const T& value);	//добавить элемент в кольцо
	void remove();//удалить элемент в кольце
	bool isEmpty() const;//проверить на пустоту кольцо
	void clearRing();//очистить кольцо
	Ring<T> findForParam(T buffOBJ);//поиск по параметру
	void sortByParam(bool (*animalCompareFuncs)(const T&, const T&));//сортировка по параметру
	

};
#include"Ring.cpp"