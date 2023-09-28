#ifndef linkedlist 
#define linkedlist

class LinkedList{
    public:
        LinkedList();

        void addNode(int value);
        
        void printList();
        
        int getValueAt(int n);

        int pop();
};

#endif