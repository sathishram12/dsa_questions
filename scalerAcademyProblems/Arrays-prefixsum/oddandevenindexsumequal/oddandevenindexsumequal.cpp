#include<vector>
#include<iostream>
using namespace std;

int solve(vector<int> &A) {
   int sumOdd=0;
   int sumEven=0;
   int count =0;
   int len = A.size();

    for (int i = 0 ; i < len; i++){
        if (i%2 != 0) sumOdd +=A[i];
        if (i%2 == 0) sumEven +=A[i];
    }

    int currOdd = 0;
    int newOddSum = 0;
    int curEven = 0;
    int newEvenSum = 0;

    for (int j = 0; j < len; j++){
        if (j % 2) {
            currOdd += A[j];
            newEvenSum = curEven + sumOdd - currOdd;
            newOddSum = currOdd + sumEven - curEven - A[j];
        }
        else {
            curEven += A[j];
            newOddSum = currOdd + sumEven - curEven;
            newEvenSum = curEven + sumOdd - currOdd - A[j];
        }
        if (newEvenSum == newOddSum) {
            count++;
        }
    }
    return count;  
}

