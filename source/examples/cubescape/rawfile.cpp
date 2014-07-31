
#include "RawFile.h"

#include <fstream>
#include <iostream>

RawFile::RawFile(const std::string & filePath)
:   m_filePath(filePath)
,   m_valid(false)
{
    m_valid = readFile();
}

RawFile::~RawFile()
{
}

bool RawFile::isValid() const
{
    return m_valid;
}

const char * RawFile::data() const
{
    return m_data.data();
}

const size_t RawFile::size() const
{
    return m_data.size();
}

bool RawFile::readFile()
{
    std::ifstream ifs(m_filePath, std::ios::in | std::ios::binary);

    if (!ifs)
    {
        std::cerr << "Reading from file \"" << m_filePath << "\" failed." << std::endl;
        return false;
    }
    
    readRawData(ifs);

    ifs.close();

    return true;
}

void RawFile::readRawData(std::ifstream & ifs)
{
    ifs.seekg(0, std::ios::end);

    const size_t size = ifs.tellg();
    m_data.resize(size);

    ifs.seekg(0, std::ios::beg);
    ifs.read(m_data.data(), size);
}
