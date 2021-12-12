#include<vector>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(string A) {
    int n = A.length();
    
    if (n == 1){
        if ((A[0]-48) % 8 == 0)
            return 1;
        else 
            return 0;
    }
    
    int last_two_digit = (A[n-1] - 48) + (A[n-2] - 48) *10;
    int third_digit = (n==2 ? 0: A[n-3]);
    
    if (third_digit %2 == 0) {
        if (last_two_digit % 8 == 0)
            return 1;
        else
            return 0;
    } else {
        if  ((last_two_digit+4) % 8 == 0) 
            return 1;
        else
            return 0;
    }
}