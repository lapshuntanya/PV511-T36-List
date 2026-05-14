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


    void push_back(U value) {
        //1. Створюємо вузол
        Node<U>* item = new Node<U>(value);

        //2. Чи це перший вузол в списку?
        if (head == nullptr || tail == nullptr) {
            head = tail = item;
        }else {
            //3 Якщо НЕ перший вузол в списку
            tail->next = &item;
            tail = item;
        }
    }

    void showList() {
        Node<U>* p = head;
        while (p != nullptr) {
            cout << p->info << " ";
            p = p->next;
        }
    }


};









