template<class T>
void FileBin<T>::SeekToBegin()
{
    stream.clear();
    stream.seekg(0, ios::beg);
    stream.seekp(0, ios::beg);
}

template<class T>
bool FileBin<T>::Write(const T& obj)
{
    stream << obj;
    return stream.good();
}

template<class T>
bool FileBin<T>::Read(T& obj)
{
    stream >> obj;
    return stream.good() && !stream.eof();
}

template<class T>
void FileBin<T>::ClearFile()
{
    if (stream.is_open()) {
        stream.close();
    }

    ofstream clearStream(fileName, ios::binary | ios::trunc);
    clearStream.close();

    stream.open(fileName, ios::in | ios::out | ios::binary);
}

template<class T>
bool FileBin<T>::IsEnd() const
{
    return stream.eof();
}

template<class T>
bool FileBin<T>::IsOpen() const
{
    return stream.is_open();
}
