#include <iostream>

#include "hashtable.h"

int main() {

  HashTable ht;

  ht.set("bingo", 3);
  ht.set("bingo", 5);
  ht.set("bopper", 2);
  ht.set("mittens", 7);
  ht.set("fishy", 1);
  ht.set("wanky", 9);

  ht.printTable();

  return 0;
}
