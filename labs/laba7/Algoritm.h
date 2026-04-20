#include "Ring.h"
template<class T>
class Algorithm
{
public:
  
    template<class Iterator>
    static   priority_queue<T> find(Iterator begin,
        Iterator end,
        const T& value);

   
    template<class Iterator>
    static void sort(Iterator begin,
        Iterator end,
        bool (*comp)(const T&, const T&));

    
    template<class Iterator>
    static void swap(Iterator first,
        Iterator second);
}; 





#include "Algoritm.hpp"