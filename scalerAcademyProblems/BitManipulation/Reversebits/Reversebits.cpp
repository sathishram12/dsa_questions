#include<vector>
#include<iostream>
using namespace std;

unsigned int reverse(unsigned int A) {
    unsigned int count = sizeof(A) * 8;
    unsigned int reverse_A = A;

    while(A) {
        reverse_A <<= 1;
        reverse_A |= A&1;
        A >>=1;
        count--;
    }
    reverse_A<<=count;
    return reverse_A;
}