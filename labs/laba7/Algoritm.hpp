template<class T>
template<class Iterator>
priority_queue<T> Algorithm<T>::find(Iterator begin,
    Iterator end,
    const T& value)
{
    priority_queue<T> result;

    
    for (Iterator it = begin; ; ++it)
    {
        if (*it == value)
        {
            result.push(*it);
        }
        if (it == end)
        {
            break;
        }
    }

    return result;
}


template<class T>
template<class Iterator>
void Algorithm<T>::sort(Iterator begin,
    Iterator end,
    bool (*comp)(const T&, const T&))
{
    
    for (Iterator i = begin; i != end; ++i)
    {
        
        Iterator j = i;
        ++j;

        while(1)
        {            
            if (comp(*i, *j))
            {
                
                swap(j, i);
            }
            if (j != end)
            {
                ++j;
            }
            else
            {
                break;
            }
        }
    }
}


template<class T>
template<class Iterator>
void Algorithm<T>::swap(Iterator first,
    Iterator second)
{
   
    T temp = *first;
    *first = *second;
    *second = temp;
}