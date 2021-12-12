#include<vector>
#include<iostream>
using namespace std;

void reverseArray(vector<int> &A, int start, int end ){
    while (start < end){
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        start++;
        end--;
    }
}

vector<vector<int> > Solution::solve(vector<int> &A, vector<int> &B) {
    vector<vector<int>> result;
    int A_size = A.size();
    int B_size = B.size();
    for (int i=0; i<B_size; i++) {
        vector<int> temp=A;
        int j = B[i]% A_size;
        reverseArray(temp, 0, (j-1));
        reverseArray(temp, j, A_size-1);
        reverseArray(temp, 0, A_size-1);
        result.push_back(temp);
    }
    return result;
}
