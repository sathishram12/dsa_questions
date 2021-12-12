#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int solve(vector<int> &A, int B) {
   
    int i = 0;
    int j =A.size()-1;
    sort(A.begin(), A.end());
    while (i < j) {
        if (A[i] + A[j] == B ){
            return 1;
        } else if (A[i] + A[j] < B){
            i++;
        } else {
            j--;
        }
    }
    return 0;
}