#include <iostream>

auto add_init(int x) {

  return [x](const int n) { return x + n; };
}

int main() {

  auto add = add_init(5);

  std::cout << "sum: " << add(7) << '\n';

  return 0;
}
