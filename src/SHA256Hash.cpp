// SPDX-FileCopyrightText: 2000-2024 Xavier Leclercq
// SPDX-License-Identifier: MIT

#include "SHA256Hash.hpp"
#include <fstream>

using namespace Ishiko;

SHA256Hash::SHA256Hash()
{
}

void SHA256Hash::update(const char* data, size_t length)
{
    m_context.update((const uint8_t*)data, length);
}

void SHA256Hash::updateFromFile(const std::string& filePath)
{
    std::ifstream input(filePath.c_str(), std::ios_base::in | std::ios_base::binary);
    const size_t bufferSize = 10 * 1024;
    char buffer[bufferSize];
    while (input.read(buffer, bufferSize).good())
    {
        update(buffer, bufferSize);
    }
    if (!input.eof())
    {
        throw 0;
    }
    update(buffer, input.gcount());
}

const std::array<unsigned char, 32>& SHA256Hash::value() const
{
    m_context.final(m_value.data());
    return m_value;
}
