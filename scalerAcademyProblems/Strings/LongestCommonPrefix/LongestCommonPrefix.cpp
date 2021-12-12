#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


string longestCommonPrefix(vector<string> &A) {
    string ans = "";
    int minLength = INT_MAX;
    
    if (A.size() == 0)
        return ans;

    for (auto i: A) 
        minLength = minLength > i.size() ? i.size() : minLength;
   

    for (int i=0 ; i < minLength; i++) {
        for(int j = 1; j < A.size(); j++) {
            if (A[j][i] != A[0][i])
                return ans;
        }
        ans.push_back(A[0][i]);
        
    }

    return ans;
}
