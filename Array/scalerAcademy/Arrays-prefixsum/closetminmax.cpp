/*
Problem Description

Given an array A. Find the size of the smallest subarray such that it contains atleast one occurrence of the maximum value of the array

and atleast one occurrence of the minimum value of the array.


Problem Constraints

1 <= |A| <= 2000


Input Format

First and only argument is vector A


Output Format

Return the length of the smallest subarray which has atleast one occurrence of minimum and maximum element of the array


Example Input

Input 1:

A = [1, 3]

Input 2:

A = [2]



Example Output

Output 1:

 2

Output 2:

 1



Example Explanation

Explanation 1:

 Only choice is to take both elements.

Explanation 2:

 Take the whole array.
*/

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
