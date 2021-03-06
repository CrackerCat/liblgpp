#ifndef LGPP_CORO_HPP
#define LGPP_CORO_HPP

#include "lgpp/pc.hpp"

namespace lgpp {
  struct Coro {
    Coro(PC pc): pc(pc), done(false) {}
    
    PC pc;
    bool done;
  };

  constexpr bool operator==(const Coro& x, const Coro& y) { return x.pc == y.pc; }

  constexpr bool operator>(const Coro& x, const Coro& y) { return x.pc > y.pc; }

  constexpr bool operator<(const Coro& x, const Coro& y) { return x.pc < y.pc; }

}

#endif
