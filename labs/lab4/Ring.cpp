template <class T>
void Ring<T>::see()//показать кольцо
{
    if (isEmpty())
    {
        cout << RED << endl << "Кольцо пустое!" << RESET;
        return;
    }
    else {
        Node<T>* buff = head;
        cout << endl;
        do
        {
            cout << buff->data << endl;
            buff = buff->next;
        } while (buff != head);
    }
}


template <class T>
void Ring<T>::add(const T& value)//добавить элемент в кольцо
{
    Node<T>* newNode = new Node<T>;
    newNode->data = value;

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
    if (!isEmpty())
    {
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
Ring<T> Ring<T>::findForParam(T buffOBJ) // Поиск по параметру
{
    Ring<T> Buff;

    if (!isEmpty())
    {
        Node<T>* buff = head;
        bool isFaund = false;

        do
        {
            if (buff->data == buffOBJ) {
                Buff.add(buff->data);
                isFaund = true;
            }

            buff = buff->next;

        } while (buff != head);

        if (!isFaund)
        {
            cout << RED << endl << "НЕ найдены объекты" << RESET;
        }

    }

    return Buff;
}


template <class T>
void Ring<T>::sortByParam(bool (*animalCompareFuncs)(const T&, const T&))  // Сортировка по параметру
{
    if (isEmpty() || head->next == head)
    {
        return;
    }

    bool IsSwapped;
    do {
        IsSwapped = false;
        Node<T>* buff = head;

        do
        {
            Node<T>* nextNode = buff->next;
            if (nextNode != head && animalCompareFuncs(buff->data, nextNode->data))
            {
                swap(buff->data, nextNode->data);
                IsSwapped = true;
            }
            buff = buff->next;

        } while (buff->next != head);
    } while (IsSwapped);
}


