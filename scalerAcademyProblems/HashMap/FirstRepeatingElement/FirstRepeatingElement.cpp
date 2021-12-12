#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
#include<set>
using namespace std;
int solve(vector<int> &A) {
    int ans = -1;
    set<int> s1;
    for (int i = A.size()-1; i>=0; i--) {
        if (s1.find(A[i]) != s1.end())
            ans = A[i];
        else 
            s1.insert(A[i]);
    }
    return ans;
}
