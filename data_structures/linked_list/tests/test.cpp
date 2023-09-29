#include <iostream>
#include "..\C++\linkedlist.h"
#include "..\..\resources\C++\logger.h"

class testLinkedList{
public:
PrintLogger logger;
LinkedList LL;

testLinkedList(){
    LL = constructLL();
}
LinkedList constructLL(){
    LinkedList ll;
    ll.addNode(2);
    ll.addNode(4);
    ll.addNode(50);
    ll.addNode(30);
    return ll;
}

int testGetValue(){
    if (LL.getValueAt(2) != 50){
        logger.log("[Error] getValueFailed");
        return 1;
    };
    logger.log("[Info] getValue passed");
    return 0;
};

int testPop(){
    LL.addNode(5);
    LL.addNode(6);
    if (LL.pop() != 6){
        logger.log("[Error] pop Failed, did not return the right value");
        return 1;
    };
    if (LL.tail->value != 5){
        logger.log("[Error] pop Failed, did not drop the last value");
        return 1;
    };
    logger.log("[Info] pop test passed");
    return 0;
};
};

void main(){
    
    testLinkedList test;
    test.testGetValue();
    test.testPop();
};


