#include "..\C++\stack.h"
#include "..\..\resources\C++\logger.h"
#include <iostream>

class TestStack{
    //Class to test the stack datastructure
    private:
        PrintLogger logger;
        int numberTestsFailed;
    public:
    TestStack(){
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

    int testPop(stack counts){
        counts.push("First");
        counts.push("Second");
        counts.push("Third");
        string val = counts.pop();

        int result = 0;
        if (val != "Third"){
            logger.log("[Error] Pop failed, does not return Third");
            result += 1;
        }
        if (counts.top-> name != "Second"){
            logger.log("[Error] Pop failed, new top is not second");
            result += 1;
        }
        counts.pop();
        counts.pop();
        if (counts.top != nullptr){
            logger.log("[Error] Pop failed, top is not nullptr after popping all");
            result += 1;
        }
        if (counts.bottum != nullptr){
            logger.log("[Error] Pop failed, bottum is not nullptr after popping all");
            result += 1;
        }
        if (result > 0){
            numberTestsFailed += result;
            return result;
        }
        logger.log("[Info] Pop test passed");
        return 0;
    };

    int testGetTop(stack counts){
        counts.push("First");
        counts.push("Second");
        counts.push("Third");
        int result = 0;
        string value = counts.getTop();
        if (value != "Third"){
            logger.log("[Error] Get top failed, not Third");
            result += 1;
        }
        value = counts.getTop();
        if (value != "Third"){
            logger.log("[Error] Get top failed, not Third");
        }
        if (result > 0){
            numberTestsFailed += result;
            return result;
        }
        logger.log("[Info] Get top Succeded");
        return 0;
    }

    int testIsEmpty(stack counts){
        if (counts.isEmpty() != true){
            logger.log("[Error] Get is empty failed");
            std::cout << (counts.bottum == nullptr);
            std::cout << (counts.top == nullptr);
            numberTestsFailed += 1;
            return 1;
        }
        logger.log("[Info] Get is empty passed");
        return 0;
    }

    int getNumberTestsFailed(){
        // Returns the number of tests failed stores it in the logs
        string resultMessage = "[INFO] Number of tests failed: ";
        resultMessage += std::to_string(numberTestsFailed);
        logger.log(resultMessage);
        return numberTestsFailed;
    }

};


int main(){
    stack counts;
    TestStack stackTester;
    stackTester.testFirstPush(counts);
    stackTester.testSecondPush(counts);
    stackTester.testPop(counts);
    stackTester.testGetTop(counts);
    stackTester.testIsEmpty(counts);
    stackTester.getNumberTestsFailed();
    return 0;
}