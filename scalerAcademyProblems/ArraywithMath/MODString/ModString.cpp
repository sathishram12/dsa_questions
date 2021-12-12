
#include<vector>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int findMod(string A, int B) {
    int n = A.length();
    long  carry = 1;
    
    long ans = 0;
    for (int i = n-1; i>=0; i--){
        ans += (((A[i]-48)%B) * (carry)%B); 
        carry = (carry *10)%B;
        ans =ans%B;
    }
    return ans;
}
