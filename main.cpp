#include "MyList.h"


int main() {
    //2, 6, 8, 4

    // Node<int> first(2);     //info=2, next=&second
    //
    // Node<int> second(6);    //info = 6, next= &third
    // first.next = &second;
    //
    // Node<int> third(8);     //info = 8, next = &fourth;
    // second.next = &third;
    //
    // Node<int> fourth(4);    //info=4, next = nullptr
    // third.next = &fourth;
    //
    //
    // //Обхід по списку
    // Node<int>* p = &first;
    // while (p != nullptr) {
    //     p->show();
    //     p = p->next;
    // }



    // List<int> nums; //head= tail = nullptr
    // nums.push_back(6); //head = tail = 6
    // nums.push_back(4); //head = 6, tail = 4
    // nums.push_back(8); //head = 6, tail = 8
    // nums.push_back(2); //head = 6, tail = 2
    //
    // nums.showList();


    DList<int> nums; //head= tail = nullptr
    nums.push_back(6); //head = tail = 6
    nums.push_back(4); //head = 6, tail = 4
    nums.push_back(8); //head = 6, tail = 8
    nums.push_back(2); //head = 6, tail = 2

    nums.show();
    nums.show_reverse();



    return 0;

}