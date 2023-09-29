#ifndef LOGGER_H
#define LOGGER_h
#include <iostream>
#include <string>
using namespace std;

class ILogger
{
    public:
    virtual void log(string logtext) = 0;
};

class PrintLogger : public ILogger
{
    public:
    virtual void log(string logtext){
        cout << logtext <<endl;
    };
};

#endif