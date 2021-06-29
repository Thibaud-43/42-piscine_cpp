#include "Sed.hpp"

Sed::Sed(std::string fileName, std::string strOld, std::string strNew):
m_fileName(fileName), m_strOld(strOld), m_strNew(strNew)
{
    m_fileNameReplace = m_fileName + ".replace";
}

Sed::~Sed()
{
    
}

void    Sed::fileToBuffer(void)
{
    string  line;
    m_myFileReading.open(m_fileName);
    if (m_myFileReading.is_open())
    {    
        while (getline (m_myFileReading, line))
        {   
             m_content += line;
            if (!m_myFileReading.eof())
			    m_content += "\n";
        }
        m_myFileReading.close();
    }
    else
        cout << "Error with file" << endl;
}

void    Sed::bufferToFile(void)
{
    string  line;
    m_myFileWriting.open(m_fileNameReplace);
    if (m_myFileWriting.is_open())
    {    
        m_myFileWriting << m_content;
        m_myFileWriting.close();
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
    if (m_strNew.length() == 0 || m_strOld.length() == 0 || m_fileName.length() == 0)
        cout << "One argument is empty" << endl;
    fileToBuffer();
    m_content = ReplaceAll(m_content, m_strOld, m_strNew);
    bufferToFile();
}