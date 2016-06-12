#include <iostream>

extern "C" {
  void sayHello()
  {
    std::cout << "Hello from plugin!\n";
  }
}
