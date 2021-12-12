#include<vector>
#include<iostream>
using namespace std;

int Solution::solve(vector<int> &A) {
    int min = INT_MAX;
    int max = INT_MIN;
    int minIndex = -1;
    int maxIndex = -1;
    int result  = INT_MAX;
    for (int i = 0; i < A.size(); i++){
        if (A[i] < min){
            min = A[i];
        }
        if (A[i] > max){
            max = A[i];
        }
    }

    for (int i=0 ; i < A.size(); i++){
        if (A[i] == min)
            minIndex = i;

        if (A[i] == max)
            maxIndex = i;
 
        if (minIndex != -1 and maxIndex != -1) {
             result = result < (abs(minIndex - maxIndex) + 1) ?  result:  (abs(minIndex - maxIndex) + 1) ;
        }
           
    }
    return result;
}
