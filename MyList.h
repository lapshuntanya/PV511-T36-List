#pragma once
#include <iostream>
using std::cout;
using std::endl;


template <typename T>
class Node {
public:
    T info;
    Node* next;
};