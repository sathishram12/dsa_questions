#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string solve(string A) {
    string ans = "";
    string cur = "";
    for (int i = A.length() - 1; i >= 0; i--) {
        if (A[i] == ' ') {
            if (cur.length() == 0) {
                continue;
            }
            // found a word 
            reverse(cur.begin(), cur.end());
            if (ans.length() > 0) {
                ans.push_back(' ');
            }
            ans += cur;
            cur = "";
            continue;
        }
        cur.push_back(A[i]);
    }
    if (cur.length() > 0) {
        reverse(cur.begin(), cur.end());
        if (ans.length() > 0) {
            ans.push_back(' ');
        }
        ans += cur;
    }
    A = ans;
    return A;
}