#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string longestPalindrome(string A) {
    string ans = "";
    int length = 1;
    int startIndex=0;
    int s =0;
    int e = 0;
    for (int i = 1; i <A.size(); i++){
        
        s = i-1;
        e = i; 
        //check longerst even length longest Palindrome
        while (s>=0 && e <A.size() && A[s] == A[e]){
            s--;
            e++;
        }
        if (e-s-1 > length) {
            length = e-s-1;
            startIndex = s+1;
        }

        s=i;
        e=i;
        //check longest odd length Palindrome
        while (s>=0 && e <A.size() && A[s] == A[e]){
            s--;
            e++;
        }
        if (e-s-1 > length) {
            length = e-s-1;
            startIndex = s+1;
        }
    }
    while (length--)
        ans.push_back(A[startIndex++]);

    return ans;
}
