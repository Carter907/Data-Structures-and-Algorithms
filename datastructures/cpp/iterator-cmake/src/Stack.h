#ifndef STACK_H
#define STACK_H

#include <cstdlib>

class Stack {
  int *data;
  std::size_t capacity;
  std::size_t size;

public:
  Stack(std::size_t cap = 10) : capacity(cap) {

    this->size = 0;
    this->data = new int[cap];
  }

  std::size_t get_size();
  std::size_t get_capacity();
  bool is_empty();
  int peek();
  void push(int);
  void pop();

  friend class StackUtil;
};

#endif
