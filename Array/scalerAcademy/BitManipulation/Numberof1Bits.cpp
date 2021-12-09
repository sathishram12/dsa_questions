/*Q2. Number of 1 Bits
Solved
character backgroundcharacter
Stuck somewhere?
Ask for help from a TA & get it resolved
Get help from TA

Problem Description
Write a function that takes an integer and returns the number of 1 bits it has.


Problem Constraints

1 <= A <= 109


Input Format

First and only argument contains integer A


Output Format

Return an integer as the answer


Example Input

Input1:

11



Example Output

Output1:

3



Example Explanation

Explaination1:

11 is represented as 1011 in binary.

*/

#include <vector>

using namespace std;
int Solution::numSetBits(int A) {
    if (A == 0) {
        return 0;
    } else {
        return A && 1  + numSetBits(A>>1);
    }
}