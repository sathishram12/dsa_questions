#include<vector>
#include<iostream>
#include<string>
#include <bits/stdc++.h>

using namespace std;

int titleToNumber(string A) {
    int ans = 0;
    int carry = 1;
    for (int i = A.length() -1; i >= 0; i--){
        ans += (A[i] - 64)*carry;
        carry = carry *26;
    }
    return ans;

}
