#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int solve(vector<int> &A) {
    sort(A.begin(), A.end(), greater<int>());

    int ans = 0;
    for (int i=0 ;i< A.size(); i++)
        ans += A[i] *(i+1);
    
    return ans;
}
