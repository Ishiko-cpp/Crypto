// SPDX-FileCopyrightText: 2000-2024 Xavier Leclercq
// SPDX-License-Identifier: MIT

#include "SHA256HashTests.hpp"
#include "SHA512HashTests.hpp"
#include "Ishiko/Crypto/linkoptions.hpp"
#include <Ishiko/TestFramework/Core.hpp>

using namespace Ishiko;

int main(int argc, char* argv[])
{
    TestHarness theTestHarness("IshikoCrypto");

    theTestHarness.context().setDataDirectory("../../data");
    theTestHarness.context().setOutputDirectory("../../output");

    TestSequence& theTests = theTestHarness.tests();
    theTests.append<SHA256HashTests>();
    theTests.append<SHA512HashTests>();

    return theTestHarness.run();
}
