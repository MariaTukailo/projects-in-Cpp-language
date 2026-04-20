#pragma once
#pragma once
#include "Ring.h"
#include "MyExceptionContainer.h"


template<class T>
T& Ring<T>::MyIterator::operator*()
{
    return current->data;
}

// Префиксный ++
template<class T>
typename Ring<T>::MyIterator& Ring<T>::MyIterator::operator++() {
    if (current)
    {
        current = current->next;
    }
    return *this;
}

// Префиксный --
template<class T>
typename Ring<T>::MyIterator& Ring<T>::MyIterator::operator--()
{
    if (current)
    {
        current = current->prev;
    }
    return *this;
}

// Оператор ==
template<class T>
bool Ring<T>::MyIterator::operator==(const MyIterator& other) const
{
    return current == other.current;
}

// Оператор !=
template<class T>
typename bool Ring<T>::MyIterator::operator!=(const MyIterator& other) const
{
    return current != other.current;
}


template<class T>
typename Ring<T>::MyIterator Ring<T>::MyIterator::operator++(int)
{
    MyIterator temp = *this;
    ++(*this);
    return temp;
}

template<class T>
typename Ring<T>::MyIterator Ring<T>::MyIterator::operator--(int)
{
    MyIterator temp = *this;
    --(*this);
    return temp;
}


template <class T>
void Ring<T>::see()
{
    try {
        if (isEmpty())
        {
            throw MyExceptionContainer(1, "Контейнер пуст");

        }
        else {
            cout << endl;
            int counter = 0;
            for (MyIterator it = begin(); ; ++it,counter++) {
                cout << counter<<" " << *it << endl;
                if (it == end())
                {
                    break;
                }
            }
        }
    }
    catch (const MyExceptionContainer& error)
    {
        error.ShowError();
        return;
    }
}

template <class T>
void Ring<T>::add(const T& value)//добавить элемент в кольцо
{
    Node<T>* newNode = new Node<T>;
    newNode->data = value;
    size++;

    if (isEmpty())
    {
        head = newNode;
        head->next = head;
        head->prev = head;
    }
    else
    {
        Node<T>* end = head->prev;
        end->next = newNode;
        newNode->prev = end;
        newNode->next = head;
        head->prev = newNode;
    }
}

template <class T>
void Ring<T>::remove()//удалить элемент в кольце
{
    try {
        if (isEmpty())
        {
            throw MyExceptionContainer(1, "Контейнер пуст");

        }
        else {
           
                    if (head->next == head)
                    {
                        delete head;
                        head = NULL;
                        return;
                    }

                    Node<T>* oldHead = head;
                    Node<T>* prev = head->prev;
                    Node<T>* next = head->next;

                    prev->next = next;
                    next->prev = prev;

                    head = next;

                    delete oldHead;
                    
                
           
        }
    }
    catch (const MyExceptionContainer& error)
    {
        error.ShowError();
        return;
    }
}


template <class T>
void Ring<T>::remove(int index)//удалить элемент в кольце
{
    try {
        if (isEmpty())
        {
            throw MyExceptionContainer(1, "Контейнер пуст");

        }
        else {

            int counter = 0;
            for (MyIterator it = begin(); ; ++it, counter++) {
                
                if (it == end())
                {
                    break;
                }

                if (counter == index) {
                    if (head->next == head)
                    {
                        delete head;
                        head = NULL;
                        return;
                    }

                    Node<T>* oldHead = head;
                    Node<T>* prev = head->prev;
                    Node<T>* next = head->next;

                    prev->next = next;
                    next->prev = prev;

                    head = next;

                    delete oldHead;
                    break;
                }

            }
        }
    }
    catch (const MyExceptionContainer& error)
    {
        error.ShowError();
        return;
    }


}

template <class T>
bool Ring<T>::isEmpty() const // Проверка на пустоту кольца
{
    return head == NULL;
}


template <class T>
void Ring<T>::clearRing() // Очистить кольцо
{

    while (!isEmpty())
    {
        remove();
    }

}


template <class T>
T Ring<T>::Get(int index) const
{
    Node<T>* buff = head;
    for (int i = 0; i < size; i++)
    {
        if (i == index)
        {
            return buff->data;
        }
        buff = buff->next;
    }

}

template <class T>
int Ring<T>::GetSize()const
{
    return size;
}

template <class T>
typename Ring<T>::MyIterator Ring<T>::begin()
{
    return MyIterator(head);
}

template <class T>
typename Ring<T>::MyIterator Ring<T>::end()
{
    return --MyIterator(head);
}

template <class T>
typename Ring<T>::MyIterator Ring<T>::Rbegin()
{
    return end();
}

template <class T>
typename Ring<T>::MyIterator Ring<T>::Rend()
{

    return begin();
}

template <class T>
typename Ring<T>::MyIterator Ring<T>::getIteratorAt(int index)
{
    if (index < 0 || index >= size || head == NULL) {
        return end();
    }

    Node<T>* current = head;
    for (int i = 0; i < index; i++)
    {
        current = current->next;
    }
    return MyIterator(current);
}
