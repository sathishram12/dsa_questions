#include<iostream>
#include<string>
using namespace std;

int pow(int A, int B, int C) {
    
    if (A == 0)
        return 0;
    
    if (B==0)
        return 1;
    
    if (A < 0 && B == 1)
        return (A+C)%C;
    
    long halfpower = pow(A, B/2, C);
    halfpower = (((halfpower % C) * (halfpower % C)) %C);

    if (B % 2 == 1)
        return ((A%C) *halfpower) %C;
    else 
        return (halfpower)% C;  
}
