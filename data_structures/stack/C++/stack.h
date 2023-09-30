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
    Element* top;
    stack(){
        top = nullptr;
    };

    void push(string name){
        Element* temp = new Element;
        temp->name = name;
        temp->next = top;
        top = temp;
    }

    string pop(){
        string name = top->name;
        top = top->next;
        return name;
    }

    string getTop(){
        return top->name;
    }

    bool isEmpty(){
        return (top == nullptr);
    }
};

#endif