#include <iostream>
#include "linkedlist.h"

void main(){
    LinkedList LL;
    LL.addNode(2);
    LL.addNode(4);
    LL.addNode(50);

    LL.printList();

    std::cout << LL.getValueAt(2);
    int pop1 = LL.pop();
    int pop2 = LL.pop();

    std::cout << pop1;
    std::cout << pop2;
}