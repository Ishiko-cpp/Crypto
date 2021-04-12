/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/Crypto/blob/master/LICENSE.txt
*/

#include "SHA512HashTests.h"
#include <Ishiko/TestFramework/TestFrameworkCore.h>

using namespace Ishiko::Tests;

int main(int argc, char* argv[])
{
    TestHarness theTestHarness("IshikoCrypto");

    TestSequence& theTests = theTestHarness.tests();
    theTests.append<SHA512HashTests>();

    return theTestHarness.run();
}
