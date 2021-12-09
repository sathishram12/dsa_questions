/*
Problem Description
You are given an array A (containing only 0 and 1) as element of N length.

Given L and R, you need to determine value of XOR of all elements from L to R (both inclusive) and number of unset bits (0's) in the given range of the array.


Problem Constraints

1<=N,Q<=100000
1<=L<=R<=N



Input Format

First argument contains the array of size N containing 0 and 1 only. 
Second argument contains a 2D array with Q rows and 2 columns, each row represent a query with 2 columns representing L and R.



Output Format

Return an 2D array of Q rows and 2 columns i.e the xor value and number of unset bits in that range respectively for each query.



Example Input

A=[1,0,0,0,1]
B=[ [2,4],
    [1,5],
    [3,5] ]



Example Output

[[0 3]
[0 3]
[1 2]]



Example Explanation

In the given case the bit sequence is of length 5 and the sequence is 1 0 0 0 1. 
For query 1 the range is (2,4), and the answer is (array[2] xor array[3] xor array[4]) = 0, and number of zeroes are 3, so output is 0 3. 
Similarly for other queries.
*/

ector<vector<int> > Solution::solve(vector<int> &A, vector<vector<int> > &B) {
    int n = A.size();
    vector<vector<int>> result;
    
    vector<int> prefix;
    prefix.push_back(A[0]);
    for (int i = 1 ; i < n; i++) {
        prefix.push_back(prefix.back() + A[i]);
    }
    
    for (int i = 0; i < B.size(); i++){
        vector<int> temp;
        int l = B[i][0] - 1;
        int r = B[i][1] - 1;
        int tempSum =  (l == 0) ?  prefix[r] : prefix[r] - prefix[l-1];
        temp.push_back (tempSum % 2);
        temp.push_back  ((r-l+1)-tempSum);
        result.push_back(temp);
    }
    return result;
}
