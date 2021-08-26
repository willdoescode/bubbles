#include <hello/world.h>
#include <saying.h>

#include <iostream>

#include "alphabet/abc.h"

int main() {
  hello::Hello hello{saying};
  hello.it();

  std::cout << a::b::c::d::e::f::g::h::i::j::k::l::m::n::o::p::q::r::s::t::u::
          w::x::y::z;

  return 0;
}
