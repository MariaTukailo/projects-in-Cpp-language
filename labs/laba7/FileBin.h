#pragma once
#include "File.h"
#include "MyExceptionFile.h"

template<class T>
class FileBin : public File
{
private:
   

public:
   
    FileBin(const string& filename):File(filename)
    {
        try {

            stream.open(fileName, ios::in | ios::out | ios::binary);
            if (!stream.is_open())
            {
                throw MyExceptionFile(1, "Не удалось открыть файл " );
            }
        }
        catch (const MyExceptionFile& error)
        {
            error.ShowError();
        }
    }

    ~FileBin()
    {
        if (stream.is_open()) 
        {
            stream.close();
        }
    }

    void SeekToBegin();
    bool Write(const T& obj);
    bool Read(T& obj);
    void ClearFile();

    bool IsEnd() const;
    bool IsOpen() const;
};

#include "FileBin.hpp"

