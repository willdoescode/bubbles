#include <hello/world.h>
#include <saying.h>

#include <boost/accumulators/accumulators.hpp>
#include <boost/accumulators/statistics/mean.hpp>
#include <boost/accumulators/statistics/moment.hpp>
#include <boost/accumulators/statistics/stats.hpp>
#include <iostream>

#include "alphabet/abc.h"

using namespace boost::accumulators;

int main() {
  hello::Hello hello{saying};
  hello.it();

  std::cout << a::b::c::d::e::f::g::h::i::j::k::l::m::n::o::p::q::r::s::t::u::
          w::x::y::z;

  accumulator_set<double, stats<tag::mean, tag::moment<2> > > acc;

  acc(1.2);
  acc(2.3);
  acc(3.4);
  acc(4.5);

  std::cout << "Mean:   " << mean(acc) << std::endl;
  std::cout << "Moment: " << moment<2>(acc) << std::endl;

  return 0;
}
