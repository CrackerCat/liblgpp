#ifndef LGPP_OPS_CALL_HPP
#define LGPP_OPS_CALL_HPP

#include "../op.hpp"
#include "../val.hpp"
#include "../vm.hpp"

namespace lgpp::ops {

  struct Call {    
    Call(Label& target): target(target) {}
    Label& target;
  };

  template <>
  inline const Op* eval(const Op& op, const Call& imp, lgpp::VM& vm, lgpp::Stack& stack) {
    vm.push_ret(op.pc+1);
    return &op - op.pc + *imp.target.pc;
  }

}

#endif
