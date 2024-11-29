// SPDX-FileCopyrightText: 2000-2024 Xavier Leclercq
// SPDX-License-Identifier: MIT

#include "SHA512Hash.hpp"
#include <fstream>

using namespace Ishiko;

SHA512Hash::SHA512Hash()
{
}

void SHA512Hash::update(const char* data, size_t length)
{
    m_context.update((const uint8_t*)data, length);
}

void SHA512Hash::updateFromFile(const std::string& filePath)
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

const SHA512Hash::Value& SHA512Hash::value() const
{
    m_context.final(m_value.data());
    return m_value;
}
