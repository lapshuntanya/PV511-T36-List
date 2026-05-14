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

template <typename T>
class DNode {
public:
    T info;
    DNode* prev;
    DNode* next;

    DNode(T value){ info = value; next = prev = nullptr; }
    void show()const {
        cout << "INFO: " << info << endl;
        cout << "\tPREV: " << prev << endl << endl;
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
            tail->next = item;
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



template <typename U>
class DList {
    DNode<U>* head;
    DNode<U>* current;
public:
    DList() { head = nullptr; current = nullptr; }

    void push_back(U value) { //Добавлення нового вузла в кінець списку
        //1. Створюємо новий вузол
        DNode<U>* item = new DNode<U>(value);

        //2. Чи ПЕРШИЙ вузол в списку?
        if (head == nullptr || current == nullptr) {
            head = current = item;
        }else {
            //3. НЕ перший вузол
            current->next = item;
            item->prev = current;

            current = item;
        }

    }
    void show() {//Виведення списку на екран
        DNode<U>* p =  head;
        while (p!= nullptr) {
            cout << p->info << " ";
            p = p->next;
        }
        cout << endl;
    }
    void show_reverse() {
        DNode<U>* p = current;
        while (p!= nullptr) {
            cout << p->info << " ";
            p = p->prev;
        }
        cout << endl;
    }

    DNode<U>* search(U value) { //Пошук вузла із заданим значенням

    }
};




