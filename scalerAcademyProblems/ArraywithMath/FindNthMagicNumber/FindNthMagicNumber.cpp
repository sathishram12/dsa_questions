#include<vector>
#include<iostream>
using namespace std;

int solve(int A) {
    int pow=1, ans =0;

    while (A)
    {
       pow = pow*5;

       if (A & 1 ==1) {
           ans += pow;   
       }
       A = A/2;     
    }
    return ans;
   
}