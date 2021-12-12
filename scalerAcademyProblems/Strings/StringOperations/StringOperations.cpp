#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string solve(string A) {
    string ans = "";
    for (int i = 0 ; i < A.size(); i++){
        if (A[i] >= 'A' && A[i] <= 'Z')
            continue;
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u')
            ans.push_back('#');
        else 
            ans.push_back(A[i]);
    }
    A= ans+ans;
    return A;

}
