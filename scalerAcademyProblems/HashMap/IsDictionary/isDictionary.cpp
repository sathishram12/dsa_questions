#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
#include<unordered_map>

int solve(vector<string> &A, string B) {
    unordered_map<char,int> dict;

    for (int i = 0; i < B.size(); i++)
        dict[B[i]] = i;
    
    for (int i = 1; i < A.size(); i++){
       
        if (dict[A[i-1][0]] > dict[A[i][0]]){
            return 0;
        } else if (dict[A[i-1][0]] == dict[A[i][0]])  {
            for (int j = 1; j < A[i-1].size() && j < A[i].size(); j++) {
                if (dict[A[i-1][j]] < dict[A[i][j]])
                    break;
                else if (dict[A[i-1][j]] > dict[A[i][j]])
                    return 0;
            }
            if (A[i-1].size() > A[i].size())
                return 0;
        } 
    }
    return 1;
}
