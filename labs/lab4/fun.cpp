template<class T>
bool SortByName(const T& a, const T& b) // Шаблонная функция сравнения по имени
{
    return a.GetName() > b.GetName();
}


template<class T>
bool SortByViev(const T& a, const T& b)// Шаблонная функция сравнения по виду
{
    return a.GetView() > b.GetView();
}