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
            temp->next = top;
            top = temp;
        }
    };

    string pop(){
        string name = top->name;
        top = top->next;
        return name;
    }

    string getTop(){
        return top->name;
    }

};

#endif