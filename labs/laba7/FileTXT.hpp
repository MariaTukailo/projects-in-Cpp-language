#include "FileTXT.h"
#include "MyExceptionContainer.h"

template<class T>
bool FileTXT<T>::openInput()
{
    try 
    {
        inStream.open(fileName);
        if (!inStream.is_open())
        {
            throw MyExceptionFile(1, "Не удалось открыть файл ");
        }
        return true;
    }
    catch(const MyExceptionFile& error)
    {
        error.ShowError();
        return false;
    }
}

// Открыть файл для записи
template<class T>
bool FileTXT<T>::openOutput()
{
      try{
        outStream.open(fileName);
        if (!outStream.is_open())
        {
            throw MyExceptionFile(1, "Не удалось открыть файл ");
        }
        return true;
    }
    catch(const MyExceptionFile& error)
    {
        error.ShowError();
        return false;
    }
}

template<class T>
void FileTXT<T>::seekToBegin()
{
    if (inStream.is_open()) {
        inStream.clear();
        inStream.seekg(0, std::ios::beg);
    }
    if (outStream.is_open()) {
        outStream.clear();
        outStream.seekp(0, std::ios::beg);
    }
}

template<class T>
bool FileTXT<T>::write(T obj)
{
     outStream << obj;
    return outStream.good();
}

template<class T>
bool FileTXT<T>::read(T& obj)
{
   
    inStream >> obj;
    return inStream.good() && !inStream.eof();
}

