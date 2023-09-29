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
        temp->next = nullptr;
        if (bottum == nullptr){
            bottum = temp;
            top = temp;
        }
        else{
            top->next = temp;
            top = temp;
        }
    };

};

#endif