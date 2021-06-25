#ifndef Sed_HPP
 #define Sed_HPP

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Sed
{
    private:
        string      _fileName;
        string      _fileNameReplace;
        string      _strOld;
        string      _strNew;
        string      _content;
        ifstream    _myFileReading;
        ofstream    _myFileWriting;
        void        fileToBuffer(void);
        void        bufferToFile(void);
        string      ReplaceAll(string str, const string& from, const string& to);
        
    public:
        Sed(string fileName, string strOld, string strNew);
        ~Sed();
        void    searchAndReplace(void);
};

#endif