#include "..\C++\stack.h"
#include "..\..\resources\C++\logger.h"
#include <iostream>

class testStack{
    //Class to test the stack datastructure
    private:
        PrintLogger logger;
        int numberTestsFailed;
    public:
    testStack(){
        numberTestsFailed = 0;
    }
    int testFirstPush(stack counts){
        counts.push("First");
        int result = 0;
        if (counts.top-> name != "First"){
            logger.log("[Error] first push failed: Top is not equal to First");
            result += 1;
        }
        if (counts.bottum-> name != "First"){
            logger.log("[Error] first push failed: bottum is not equal to First");
            result += 1;
        }
        if (result > 0){
            numberTestsFailed += result;
            return result;
        }
        logger.log("[Info] First push passed: Top and bottum are both equal to First");
        return 0;
    };
    int testSecondPush(stack counts){
        counts.push("First");
        counts.push("Second");
        int result = 0;
        if (counts.top-> name != "Second"){
            logger.log("[Error] Second push failed: Top is not equal to Second");
            result += 1;
        }
        if (counts.bottum-> name != "First"){
            logger.log("[Error] second push failed: bottum is not equal to First");
            result += 1;
        }
        if (result > 0){
            numberTestsFailed += result;
            return result;
        }
        logger.log("[Info] Second push passed: Top equal to Second and bottum equal to First");
        return 0;
    };

    int getNumberTestsFailed(){
        string resultMessage = "[INFO] Number of tests failed: ";
        resultMessage += std::to_string(numberTestsFailed);
        logger.log(resultMessage);
        return numberTestsFailed;
    }

};


void main(){
    stack counts;
    testStack stacktester;
    stacktester.testFirstPush(counts);
    stacktester.testSecondPush(counts);
    stacktester.getNumberTestsFailed();
}