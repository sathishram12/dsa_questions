/*Q2.Reverse Bits


Problem Description

Reverse the bits of an 32 bit unsigned integer A.


Problem Constraints

0 <= A <= 232


Input Format

First and only argument of input contains an integer A.


Output Format

Return a single unsigned integer denoting the decimal value of reversed bits.


Example Input

Input 1:

 0

Input 2:

 3



Example Output

Output 1:

 0

Output 2:

 3221225472
 */

unsigned int Solution::reverse(unsigned int A) {
    unsigned int count = sizeof(A) * 8;
    unsigned int reverse_A = A;

    while(A) {
        reverse_A <<= 1;
        reverse_A |= A&1;
        A >>=1;
        count --;
    }
    reverse_A<<=count;
    return reverse_A;
}