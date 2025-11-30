#include "Stack.h"
#include <cstdlib>
#include <iostream>

bool Stack::is_empty() { return this->size == 0; }
std::size_t Stack::get_size() { return this->size; }
std::size_t Stack::get_capacity() { return this->capacity; }

int Stack::peek() {
  if (this->size == 0)
    throw "failed to access stack. size is 0.";

  return this->data[this->size - 1];
}

void Stack::push(int n) {

  this->data[size] = n;

  size++;

  if (size == capacity) {

    std::cout << "resized stack array to be "
              << this->capacity * sizeof(int) * 2 << " bytes" << '\n';
    this->data = (int *)realloc(this->data, this->capacity * sizeof(int) * 2);
    this->capacity *= 2;
  }
}

void Stack::pop() {

  size--;

  if (size == (1 / 2 * capacity)) {
    std::cout << "resized stack array to be "
              << this->capacity * sizeof(int) * 1 / 2 << " bytes" << '\n';

    this->data =
        (int *)realloc(this->data, this->capacity * sizeof(int) * 1 / 2);
    this->capacity /= 2;
  }
}
