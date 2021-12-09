/*Given an array of integers A and an integer B, find and return the difference of B'th max element and B'th min element of the array A.


Input Format

The first argument given is the integer array A.
The second argument given is integer B.

Output Format

Return the value of B'th max element of A - B'th min element of A.

Constraints

1 <= B <= length of the array <= 100000
-10^9 <= A[i] <= 10^9 

For Example

Input 1:
    A = [1, 2, 3, 4, 5]
    B = 2
Output 1:
    2   (4 - 2 = 2)

Input 2:
    A = [5, 17, 100, 11]
    B = 1
Output 2:
    95  (100 - 5 = 95)
*/


int Solution::solve(vector<int> &A, int B) {
    if (B > A.size()){
        return 0;
    }
    sort(A.begin(), A.end());
    int start = B-1;
    int last = A.size()-B;
    return A[last] - A[start];
}