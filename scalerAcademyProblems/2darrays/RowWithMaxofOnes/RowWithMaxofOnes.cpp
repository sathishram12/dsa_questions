
#include<vector>
#include<iostream>
using namespace std;

int solve(vector<vector<int> > &A) {
    int n = A.size();
    int j = n-1; 
    int index = INT_MAX;
    for (int i = 0; i < n; i++) {
        while (j>=0 && A[i][j] == 1) {
            j--;
            index = i;
        }
    }
    return index;
}
