#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;

int solve(vector<int> &A, int B) {
    set<int> s1;
    
    for (int i = 0 ; i < A.size(); i++) 
        s1.insert(A[i]);
    
    int ans=0;
    for (int i = 0 ; i < A.size(); i++){
        if (s1.find(A[i] ^ B) != s1.end())
            ans++;
    }
    return ans/2;
}