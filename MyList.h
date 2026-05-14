#pragma once
#include <iostream>
using std::cout;
using std::endl;


template <typename T>
class Node {
public:
    T info;
    Node* next;

    Node(T value){ info = value; next = nullptr; }
    void show()const {
        cout << "INFO: " << info << endl;
        cout << "\tNEXT: " << next << endl << endl;
    }
};


template <typename U>
class List {
    Node<U>* head;
    Node<U>* tail;
public:
    List() {
        head = tail = nullptr;
    }

};









