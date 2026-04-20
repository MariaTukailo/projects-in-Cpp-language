#pragma once
#include <fstream>
using namespace std;
#include <string>
#include "Bird.h"
#include "Pretador.h"
#include "Herbivore.h"

class File
{
protected:

    string fileName;   // имя файла
    ifstream inStream;      // поток для чтения текстового
    ofstream outStream;      // поток для записи текстового
    fstream  stream; // поток для бинарного файла

public:
    File() {}
    File(string fileNameOther)
    {
        fileName = fileNameOther;
    }
    ~File() {}
};
