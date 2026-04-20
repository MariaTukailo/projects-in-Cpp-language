#pragma once
#include "File.h"

template<class T>
class FileTXT : public File
{
public:
    FileTXT(const string& filename) :File(filename) {}
    ~FileTXT()
    {
        if (inStream.is_open()) inStream.close();
        if (outStream.is_open()) outStream.close();
    }

    bool openInput();
    bool openOutput();

    void seekToBegin();           // Сброс позиции чтения
    bool write(T obj);     // Запись объекта
    bool read(T& obj);            // Чтение объекта

 
    bool isEnd() const { return inStream.eof(); }
    bool isInputOpen() const { return inStream.is_open(); }
    bool isOutputOpen() const { return outStream.is_open(); }
   
};

#include"FileTXT.hpp"