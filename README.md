This project implements a simple but practical stack based VM for interpreters in the form of a C++ library.

```
#include <cassert>

#include "lgpp/ops/push.hpp"
#include "lgpp/ops/stop.hpp"
#include "lgpp/stack.hpp"
#include "lgpp/vm.hpp"

using namespace lgpp;

int main() {
  VM vm;
  Stack s;

  vm.emit<ops::Push>(Int, 42);
  vm.emit<ops::Stop>();
  vm.eval(0, s);
  assert(pop(s).as(Int) == 42);

  return 0;
}
```

Custom interpreters are powerful and flexible tools that allow solving thorny problems with grace.

The idea is that distilling the fundamental building blocks in library form makes it possible to reduce needed effort to the point where more problems start to look like custom languages, and where it's affordable to try out new ideas and throw some away.

The provided VM supports two types of values, threads and integers; and the minimal set of operations needed to write simple algorithms; but it is trivial to extend with additional types and operations.

Modern C++ is a fairly complex language, but it is unique in how it allows dialling in just the right balance between abstraction, performance and safety. I've tried my best to keep the code as simple as straight forward as the language allows, using the standard library where appropriate without getting tangled up in needless abstraction.

### setup

```
```