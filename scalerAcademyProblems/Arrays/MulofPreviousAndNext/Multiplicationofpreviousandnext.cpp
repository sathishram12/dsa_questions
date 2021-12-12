#include<vector>
#include<iostream>
using namespace std;

vector<int> Solution::solve(vector<int> &A) {
 vector<int>result;
 int A_size = A.size();
 if (A_size == 1) {
     return A;
 }
 int prev = A[0];
 A[0] *= A[1];
 for (int i =1; i < A_size -1; i++) {
    int curr = A[i];
    A[i]= prev *A[i+1];
    prev = curr;
 }
 A[ A_size -1] *= prev;
 return A;
}