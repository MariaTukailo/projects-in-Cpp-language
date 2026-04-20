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
	int size;

public:

	class MyIterator
	{
	private:
		Node<T>* current;

	public:

		MyIterator(Node<T>* node = NULL)
		{
			current = node;
		}
		MyIterator(const MyIterator& other)
		{
			current = other.current;
		}

		T& operator*();
		MyIterator& operator++();
		MyIterator& operator--();
		MyIterator operator++(int);
		MyIterator operator--(int);
		bool operator==(const MyIterator& other) const;
		bool operator!=(const MyIterator& other) const;

	};

	Ring() : head(NULL)    // Конструктор без параметра
	{
		size = 0;
	}

	Ring(const T& value)	// Конструктор с параметром
	{
		add(value);
		size = 1;
	}

	Ring(const Ring<T>& other) : head(NULL) //конструктор копирования
	{
		size = 0;
		if (other.isEmpty())
		{
			return;
		}
		else
		{
			Node<T>* buff = other.head;
			do
			{
				size++;
				add(buff->data);
				buff = buff->next;
			} while (buff != other.head);
		}
	}

	~Ring()      //деструктор
	{
		clearRing();
	}


	void see();//посмотреть кольцо
	void add(const T& value);//добавить элемент в кольцо
	void remove();//удалить элемент в кольце
	void remove(int index);
	bool isEmpty() const;//проверить на пустоту кольцо
	void clearRing();//очистить кольцо
	
	T Get(int index) const;
	int GetSize()const;

	MyIterator begin();
	MyIterator end();
	MyIterator Rbegin();
	MyIterator Rend();
	MyIterator getIteratorAt(int index);
};

#include "Ring.hpp"




