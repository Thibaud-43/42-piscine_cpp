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

std::string Sed::replaceAll( std::string const& original, std::string const& from, std::string const& to )
{
    std::string results;
    std::string::const_iterator end = original.end();
    std::string::const_iterator current = original.begin();
    std::string::const_iterator next = std::search( current, end, from.begin(), from.end() );
    while ( next != end ) {
        results.append( current, next );
        results.append( to );
        current = next + from.size();
        next = std::search( current, end, from.begin(), from.end() );
    }
    results.append( current, next );
    return results;
}

void    Sed::searchAndReplace(void)
{
    if (m_strNew.length() == 0 || m_strOld.length() == 0 || m_fileName.length() == 0)
        cout << "One argument is empty" << endl;
    fileToBuffer();
    m_content = replaceAll(m_content, m_strOld, m_strNew);
    bufferToFile();
}