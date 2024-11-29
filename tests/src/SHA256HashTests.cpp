// SPDX-FileCopyrightText: 2000-2024 Xavier Leclercq
// SPDX-License-Identifier: MIT

#include "SHA256HashTests.hpp"
#include "Ishiko/Crypto/SHA256Hash.hpp"

using namespace Ishiko;

SHA256HashTests::SHA256HashTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "SHA256Hash tests", context)
{
    append<HeapAllocationErrorsTest>("Creation test 1", CreationTest1);
}

void SHA256HashTests::CreationTest1(Test& test)
{
    SHA256Hash hash;

    ISHIKO_TEST_PASS();
}
