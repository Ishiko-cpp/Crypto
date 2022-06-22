/*
    Copyright (c) 2017-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/crypto/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_CRYPTO_TESTS_SHA512HASHTESTS_HPP_
#define _ISHIKO_CPP_CRYPTO_TESTS_SHA512HASHTESTS_HPP_

#include <Ishiko/TestFramework/Core.hpp>

class SHA512HashTests : public Ishiko::TestSequence
{
public:
    SHA512HashTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void CreationTest1(Ishiko::Test& test);
    static void ValueTest1(Ishiko::Test& test);
    static void ValueTest2(Ishiko::Test& test);
    static void ValueTest3(Ishiko::Test& test);
    static void ValueTest4(Ishiko::Test& test);
    static void ValueTest5(Ishiko::Test& test);
    static void UpdateFromFileTest1(Ishiko::Test& test);
    static void UpdateFromFileTest2(Ishiko::Test& test);
    static void UpdateFromFileTest3(Ishiko::Test& test);
    static void UpdateFromFileTest4(Ishiko::Test& test);
    static void UpdateFromFileTest5(Ishiko::Test& test);
};

#endif
