#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;

vector<int> solve(vector<int> &A, int B) {
    int current_sum = A[0];
    int startIndex=0;
   
    for(int i = 1; i < A.size(); i++){
        current_sum +=A[i];
        while (current_sum > B && startIndex <= i) {
            current_sum = current_sum - A[startIndex];
            startIndex++;
        }
        if (current_sum == B) {
            vector<int> result (A.begin()+startIndex, A.begin() + i+1);
            return   result;
        }
    }
    
    vector<int> result(1,-1);
    return result;
}