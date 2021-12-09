/*Given an array of integers A, update every element with multiplication of previous and next elements with following exceptions. a) First element is replaced by multiplication of first and second. b) Last element is replaced by multiplication of last and second last.


Input Format

The only argument given is the integer array A.

Output Format

Return the updated array.

Constraints

1 <= length of the array <= 100000
-10^4 <= A[i] <= 10^4 

For Example

Input 1:
    A = [1, 2, 3, 4, 5]
Output 1:
    [2, 3, 8, 15, 20]

Input 2:
    A = [5, 17, 100, 11]
Output 2:
    [85, 500, 187, 1100]
*/

vector<int> Solution::solve(vector<int> &A) {
 vector<int>result;
 int A_size = A.size();
 if (A_size == 1) {
     return A;
 }
 int prev = A[0];
 A[0] *= A[1];
 for (int i =1; i < A_size -1; i++) {
    int curr = A[i];
    A[i]= prev *A[i+1];
    prev = curr;
 }
 A[ A_size -1] *= prev;
 return A;
}