//
// Created by carter on 6/22/25.
//
#include <cstdlib>
#include <iostream>
#include "hashtable.h"

void HashTable::printTable() const {
  for (int i = 0; i < TABLE_SIZE; i++) {
    std::cout << "Table[" << i << "]" << '\n';

    Node *curr = table[i];
    while (curr != nullptr) {
      std::cout << curr->key << " to " << curr->value << '\n';
      curr = curr->next;
    }
    std::cout << '\n';
  }
}

int HashTable::hash(const std::string &key) const {
  int hash = 0;
  for (std::size_t i = 0; i < key.length(); i++) {
    hash += key[i];
  }
  hash = (hash*23) % TABLE_SIZE;

  return hash;
}

void HashTable::set(const std::string &key, int value) {
  int h = hash(key);

  if (this->table[h] == nullptr) {
    table[h] = new Node(key, value);
  } else {
    Node *curr = table[h];

    while (curr->next != nullptr) {
      curr = curr->next;
    }
    curr->next = new Node(key, value);
  }
}
