#ifndef STACK_H
#define STACK_H

#include <string>
using namespace std;

struct Element{
    string name;
    Element* next;
    };

class stack{
    public:
    Element* bottum;
    Element* top;
    stack(){
        bottum = nullptr;
        top = nullptr;
    };

    void push(string name){
        Element* temp = new Element;
        temp->name = name;
        if (bottum == nullptr){
            bottum = temp;
            bottum-> next = nullptr;
            top = temp;
        }
        else{
            temp->next = top;
            top = temp;
        }
    };

    string pop(){
        string name = top->name;
        top = top->next;
        if (top == nullptr){
            bottum = nullptr;
        }
        return name;
    }

    string getTop(){
        return top->name;
    }

    bool isEmpty(){
        return (bottum == nullptr && top == nullptr);
    }
};

#endif