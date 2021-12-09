/*Problem Description
Given two binary strings, return their sum (also a binary string).

Example:

a = "100"

b = "11"
Return a + b = "111".
*/

#include<vector>
#include<string>

using namespace std;
string Solution::addBinary(string A, string B) {
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    int n = 0 ; 
    int sum = 0;
    string result = "";
    while (n < A.size() || n < B.size()){
        if (n < A.size()) sum += A[n] -'0';
        if (n < B.size()) sum += A[n] -'0';
        result += char ( sum %2 + '0'); 
        sum = sum/2;
        n++;
    }
    reverse(result.begin(),result.end());
    return result;
}
