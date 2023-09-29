#include "..\C++\stack.h"
#include "..\..\resources\C++\logger.h"
#include <iostream>

class testStack{
    private:
        PrintLogger logger;
    public:
    int testFirstPush(stack counts){
        counts.push("First");
        if (counts.top-> name != "First"){
            logger.log("[Error] first push failed: Top is not equal to First");
            return 1;
        }
        if (counts.bottum-> name != "First"){
            logger.log("[Error] first push failed: bottum is not equal to First");
            return 1;
        }
        logger.log("[Info] First push passed: Top and bottum are both equal to First");
        return 0;
    };
    int testSecondPush(stack counts){
        counts.push("First");
        counts.push("Second");
        if (counts.top-> name != "Second"){
            logger.log("[Error] Second push failed: Top is not equal to Second");
            return 1;
        }
        if (counts.bottum-> name != "First"){
            logger.log("[Error] second push failed: bottum is not equal to First");
            return 1;
        }
        logger.log("[Info] Second push passed: Top equal to Second and bottum equal to First");
        return 0;
    };

};


void main(){
    stack counts;
    testStack stacktester;
    stacktester.testFirstPush(counts);
    stacktester.testSecondPush(counts);
}