/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * This file is part of the musl_test project:
 *     https://github.com/radupopescu/must_test
 */

#include "musl_test_config.h"

#include <dummy.h>

#include <iostream>

int main()
{
    std::cout << "musl_test version: " << musl_test_VERSION_STRING << std::endl;

    musl_test::Dummy d;
    int var = d.Var();

    return 0;
}
