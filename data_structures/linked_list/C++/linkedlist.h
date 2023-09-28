#ifndef linkedlist 
#define linkedlist

struct Node{
        int value;
        Node* next;
    };

class LinkedList{
    public:
        LinkedList();

        void addNode(int value);
        
        void printList();
        
        int getValueAt(int n);

        int pop();
};

#endif