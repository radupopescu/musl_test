/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * This file is part of the musl_test project:
 *     https://github.com/radupopescu/musl_test
 */

#include "dummy.h"

namespace musl_test {
Dummy::Dummy()
    : mVar(1)
{
}

Dummy::~Dummy()
{
}

int Dummy::Var() const
{
  return 0;
}
}
