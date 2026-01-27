//
// Created by carter on 6/22/25.
//

#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "node.h"

#define TABLE_SIZE (10)

class HashTable {

private:
  Node *table[TABLE_SIZE];

public:
  HashTable() = default;
  ~HashTable() {

    for (int i = 0; i < TABLE_SIZE; i++) {

      auto curr = table[i];
      while (curr != nullptr) {
        Node *tmp = curr;
        curr = curr->next;
        delete tmp;
      }
    }

  }
  
  int hash(const std::string &key) const;
  void printTable() const;
  void set(const std::string &key, int value);
};

#endif // HASHTABLE_H
