#include <iostream>

struct Node
    {
        int value;
        Node* next;
    };

class LinkedList{
    private:
        Node* head;
        Node* tail;
    public:
        LinkedList(){
            head = nullptr;
            tail = nullptr;
            };

        void addNode(int value){
            Node* temp = new Node;      //Store the pointer to the new node in temp
            temp->value = value;        //Assign the value to the value stored at temp
            temp->next = nullptr;       //Add the next pointer to null

            if (head == nullptr){       //If it is the first node, assign it as head and tail
                    head = temp;
                    tail = temp;
                }
            else{                       //Else point the tail.next to temp, and assign temp only as tail, 
                    tail->next = temp;
                    tail = temp;
                }

            }
        
        void printList(){
            Node* current = head;

            while (current != nullptr){
                std::cout << current-> value << std::endl;
                current = current->next; //Set current to next from current.
            }
        }
    };


void main(){
    LinkedList LL;
    LL.addNode(2);
    LL.addNode(4);
    LL.addNode(50);

    LL.printList();
}