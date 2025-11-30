#include "StackUtil.h"

void StackUtil::print_stack(Stack *stk) const {
  if (stk->is_empty())
    return;
  for (int i = stk->get_size() - 1; i >= 0; i--) {

    std::cout << stk->data[i] << '\n';
    std::cout << "--" << '\n';
  }
}
