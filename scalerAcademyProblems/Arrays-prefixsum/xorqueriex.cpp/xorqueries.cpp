#include<vector>
#include<iostream>
using namespace std;

vector<vector<int> > solve(vector<int> &A, vector<vector<int> > &B) {
    int n = A.size();
    vector<vector<int>> result;
    
    vector<int> prefix;
    prefix.push_back(A[0]);
    for (int i = 1 ; i < n; i++) {
        prefix.push_back(prefix.back() + A[i]);
    }
    
    for (int i = 0; i < B.size(); i++){
        vector<int> temp;
        int l = B[i][0] - 1;
        int r = B[i][1] - 1;
        int tempSum =  (l == 0) ?  prefix[r] : prefix[r] - prefix[l-1];
        temp.push_back (tempSum % 2);
        temp.push_back  ((r-l+1)-tempSum);
        result.push_back(temp);
    }
    return result;
}
