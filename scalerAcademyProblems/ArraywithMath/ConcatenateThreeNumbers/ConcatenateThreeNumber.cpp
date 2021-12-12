#include<vector>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(int A, int B, int C) {
    int ans = 0;
    int temp = 0;
    
    if ( A >= B && A >= C) {
        ans=A;
        if (B>=C) 
            ans += C*10000+ B*100;
        else
            ans += B*10000+ C*100; 
    } 

    if ( B >= A && B >= C) {
        ans=B;
        if (A>=C) 
            ans += C*10000+ A*100;
        else
            ans += A*10000+ C*100; 
    } 

    if ( C >= A && C >= B) {
        ans=C;
        if (A>=B) 
            ans += B*10000+ A*100;
        else
            ans += A*10000+ B*100; 
    }
    return ans; 

}
