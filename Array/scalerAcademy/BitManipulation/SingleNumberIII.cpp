/*Q1. Single Number III
Solved
character backgroundcharacter
Stuck somewhere?
Ask for help from a TA & get it resolved
Get help from TA

Problem Description

Given an array of numbers A , in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once.

Note: Output array must be sorted.



Problem Constraints

2 <= |A| <= 100000
1 <= A[i] <= 109


Input Format

First argument is an array of interger of size N.


Output Format

Return an array of two integers that appear only once.


Example Input

Input 1:

A = [1, 2, 3, 1, 2, 4]

Input 2:

A = [1, 2]



Example Output

Output 1:

[3, 4]

Output 2:

[1, 2]



Example Explanation

Explanation 1:

 3 and 4 appear only once.

Explanation 2:

 1 and 2 appear only once.
*/
vector<int> Solution::solve(vector<int> &A) {
    int var = 0
    for (auto &i: A) {
        var ^=i;
    }
    int mask = ((val & val -1)) ^ val; // get last bit
    int A = 0;
    int B = 0;
    for (auto x:A){
        if( x & mask)
            A ^= x;
        else 
            B ^= x;
    }
    int x = min(intA, intB), y = max(intA, intB);
    return vector < int > {x, y};
}