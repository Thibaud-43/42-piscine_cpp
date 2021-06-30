#ifndef Sed_HPP
 #define Sed_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

class Sed
{
    private:
        string      m_fileName;
        string      m_fileNameReplace;
        string      m_strOld;
        string      m_strNew;
        string      m_content;
        ifstream    m_myFileReading;
        ofstream    m_myFileWriting;
        void        fileToBuffer(void);
        void        bufferToFile(void);
        string      replaceAll( std::string const& original, std::string const& from, std::string const& to );

        
    public:
        Sed(string fileName, string strOld, string strNew);
        ~Sed();
        void    searchAndReplace(void);
};

#endif