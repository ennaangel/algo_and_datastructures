#ifndef LINKED_LIST_H
#define LINKED_LIST_H //#pragma once (?)

struct Node{
        int value;
        Node* next;
    };

class LinkedList{

    public:
        Node* head;
        Node* tail;
        LinkedList(){
            head = nullptr;
            tail = nullptr;
            };

        void addNode(int value){
            //Adds a node with the given value at the end of the LinkedList
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
        
        int getValueAt(int n){
            Node* current = head;
            int i = 0;

            while (i < n && current != nullptr){
                i++;
                current = current->next;
                }
            if (current == nullptr){
                return 0;               //TODO: Throw an error when index is larger then length of list
            }
            return current->value;
            }

        int pop(){
            Node* current = head;
            Node* previous = head;

            while(current->next != nullptr){
                previous = current;
                current = current->next;
                }

            previous->next = nullptr;
            tail = previous;
            return current->value;
            }
    };

#endif // LINKED_LIST_H