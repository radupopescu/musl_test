/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * This file is part of the musl_test project:
 *     https://github.com/radupopescu/must_test
 */

#pragma once

namespace musl_test {
class Dummy
{
public:
  Dummy();
  ~Dummy();

  int Var() const;

private:
  int mVar;
};
}
