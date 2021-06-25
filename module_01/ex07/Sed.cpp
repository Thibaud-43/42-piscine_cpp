#include "Sed.hpp"

Sed::Sed(std::string fileName, std::string strOld, std::string strNew): _fileName(fileName), _strOld(strOld), _strNew(strNew)
{
    _fileNameReplace = _fileName + ".replace";
}

Sed::~Sed()
{
    
}

void    Sed::fileToBuffer(void)
{
    string  line;
    _myFileReading.open(_fileName);
    if (_myFileReading.is_open())
    {    
        while (getline (_myFileReading, line))
        {   
             _content += line;
            if (!_myFileReading.eof())
			    _content += "\n";
        }
        _myFileReading.close();
    }
    else
        cout << "Error with file" << endl;
}

void    Sed::bufferToFile(void)
{
    string  line;
    _myFileWriting.open(_fileNameReplace);
    if (_myFileWriting.is_open())
    {    
        _myFileWriting << _content;
        _myFileWriting.close();
    }
    else
        cout << "Error with file" << endl;
}

string Sed::ReplaceAll(std::string str, const std::string& from, const std::string& to)
{
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) 
    {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
    return str;
}

void    Sed::searchAndReplace(void)
{
    if (_strNew.length() == 0 || _strOld.length() == 0 || _fileName.length() == 0)
        cout << "One argument is empty" << endl;
    fileToBuffer();
    _content = ReplaceAll(_content, _strOld, _strNew);
    bufferToFile();
}