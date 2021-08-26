#pragma once

#include <iostream>
#include <string>

namespace hello {
class Hello {
private:
  std::string world;

public:
  void it() {
    std::cout << "Hello"
              << " " << this->world << std::endl;
  }

  Hello(std::string _world) : world(std::move(_world)){};
  ~Hello() = default;
};
} // namespace hello
