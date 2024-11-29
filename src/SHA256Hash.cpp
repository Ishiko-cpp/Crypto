// SPDX-FileCopyrightText: 2000-2024 Xavier Leclercq
// SPDX-License-Identifier: MIT

#include "SHA256Hash.hpp"

using namespace Ishiko;

SHA256Hash::SHA256Hash()
{
}

void SHA256Hash::update(const char* data, size_t length)
{
    m_context.update((const uint8_t*)data, length);
}

const std::array<unsigned char, 32>& SHA256Hash::value() const
{
    m_context.final(m_value.data());
    return m_value;
}
