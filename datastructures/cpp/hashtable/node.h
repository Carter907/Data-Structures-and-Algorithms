//
// Created by carter on 6/22/25.
//

#ifndef NODE_H
#define NODE_H
#include <string>


struct Node {
    std::string key;
    int value;
    Node *next;

    Node(const std::string &key, const int value) {
        this->key = key;
        this->value = value;
        this->next = nullptr;
    }

};

#endif //NODE_H
