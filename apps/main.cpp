/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * This file is part of the musl_test project:
 *     https://github.com/radupopescu/musl_test
 */

#include "musl_test_config.h"

#include <dummy.h>

#include <iostream>
#include <future>
#include <thread>

#include <dlfcn.h>

typedef void(*PluginFunction)(void);

int main()
{
  // C++11 std::thread
  auto t1 = std::thread([] {
    std::cout << "musl_test version: " << musl_test_VERSION_STRING << std::endl;
  });

  t1.join();


  const auto n = 1;

  // C++14 generic lambda
  auto f = [n] (auto i) {
    return n + i;
  };

  std::cout << "f(1) = " << f(1) << std::endl;

  // C++11 std::async
  auto result = std::async(f, 2);

  std::cout << "f(2) = " << result.get() << std::endl;

  // Use a plugin
  void* myPlugin = dlopen("libmusl_test_plugin.so", RTLD_LAZY);
  if (myPlugin == nullptr) {
    std::cerr << "Error loading plugin." << std::endl;
  } else {
    void* myPluginFun = dlsym(myPlugin, "sayHello");
    if (myPluginFun == nullptr) {
      std::cerr << "Error loading symbol from plugin." << std::endl;
    } else {
      PluginFunction f = (PluginFunction)myPluginFun;
      f();
      dlclose(myPlugin);
    }
  }

  return 0;
}
