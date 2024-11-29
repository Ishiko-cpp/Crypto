// SPDX-FileCopyrightText: 2000-2024 Xavier Leclercq
// SPDX-License-Identifier: MIT

#ifndef GUARD_ISHIKO_CPP_CRYPTO_TESTS_SHA256HASHTESTS_HPP
#define GUARD_ISHIKO_CPP_CRYPTO_TESTS_SHA256HASHTESTS_HPP

#include <Ishiko/TestFramework/Core.hpp>

class SHA256HashTests : public Ishiko::TestSequence
{
public:
    SHA256HashTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void CreationTest1(Ishiko::Test& test);
};

#endif
