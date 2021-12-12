#include<vector>
#include<iostream>
#include<string>
using namespace std;

vector<string> fizzBuzz(int A) {
    vector<string> result;

    for (int i=1 ;i <= A; i++){

        if (i % 3 == 0 && i%5 ==0){
            result.push_back("FizzBuzz");
        }
        else if (i % 3 == 0){
            result.push_back("Fizz");
        }
        else if (i % 5 == 0) {
            result.push_back("Buzz");
        } 
        else {
            result.push_back(std::to_string(i));
        } 
    }
    return result;
}
