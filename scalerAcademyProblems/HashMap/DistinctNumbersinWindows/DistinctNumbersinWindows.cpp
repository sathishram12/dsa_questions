#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;

vector<int> dNums(vector<int> &A, int B) {
    vector<int> ans;
    unordered_map<int,int> m1;
    
    for (int i=0; i <  A.size(); i++){
        ++m1[A[i]];
        if (i+1-B >= 0) {
            ans.push_back(m1.size());
            --m1[A[i+1-B]];
            m1[A[i+1-B]] == 0 ? m1.erase(A[i+1-B]) : 1;
        }
    }
    return ans;
}
