/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * This file is part of the musl_test project:
 *     https://github.com/radupopescu/must_test
 */

#include "catch.hpp"

#include "dummy.h"

TEST_CASE( "Dummy::Var() returns 0", "[dummy]" ) {
  musl_test::Dummy d;
  REQUIRE( d.Var() == 0);
}
