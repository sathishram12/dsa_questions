/*
Problem Description

Given an array, arr[] of size N, the task is to find the count of array indices such that removing an element from these indices makes the sum of even-indexed and odd-indexed array elements equal.


Problem Constraints

1<=n<=1e5
-1e5<=A[i]<=1e5



Input Format

First argument contains an array A of integers of size N


Output Format

Return the count of array indices such that removing an element from these indices makes the sum of even-indexed and odd-indexed array elements equal.


Example Input

Input 1:

A=[2, 1, 6, 4]

Input 2:

A=[1, 1, 1]



Example Output

Output 1:

1

Output 2:

3



Example Explanation

Explanation 1:

Removing arr[1] from the array modifies arr[] to { 2, 6, 4 } such that, arr[0] + arr[2] = arr[1]. 
Therefore, the required output is 1. 

Explanation 2:

 Removing arr[0] from the given array modifies arr[] to { 1, 1 } such that arr[0] = arr[1] 
Removing arr[1] from the given array modifies arr[] to { 1, 1 } such that arr[0] = arr[1] 
Removing arr[2] from the given array modifies arr[] to { 1, 1 } such that arr[0] = arr[1] 
Therefore, the required output is 3.

*/

int Solution::solve(vector<int> &A) {
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

