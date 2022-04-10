/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/crypto/blob/main/LICENSE.txt
*/

#include "SHA512HashTests.h"
#include <Ishiko/TestFramework/Core.hpp>

using namespace Ishiko;

int main(int argc, char* argv[])
{
    TestHarness theTestHarness("IshikoCrypto");

    theTestHarness.context().setTestDataDirectory("../../TestData");
    theTestHarness.context().setTestOutputDirectory("../../TestOutput");

    TestSequence& theTests = theTestHarness.tests();
    theTests.append<SHA512HashTests>();

    return theTestHarness.run();
}
