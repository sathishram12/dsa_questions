#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int sumofdigits (int s){
    if (s == 0)
        return 0;
    else 
        return s%10 + sumofdigits(s/10);
}

int solve(int A) {
    int s = sumofdigits(A);
    if (s == 1)
        return 1;
    else if (s < 10)
        return 0;
    else 
        return solve(s);
}