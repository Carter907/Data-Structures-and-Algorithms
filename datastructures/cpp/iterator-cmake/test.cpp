#include "src/Stack.h"
#include "src/StackUtil.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("UNIT TEST 1", "[testing arithmetic]") {
  Stack *stk = new Stack(2);
  stk->push(5);
  stk->push(2);
  stk->push(1);
  stk->push(3);

  StackUtil *util = new StackUtil;

  util->print_stack(stk);

  std::cout << "capacity is " << stk->get_capacity() << '\n';
  std::cout << "size is " << stk->get_size() << '\n';
}
