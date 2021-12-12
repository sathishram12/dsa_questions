#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
#include<set>
using namespace std;

vector<int> lszero(vector<int> &A) {
    int ps = 0;
    int startIndex=0;
    int stopIndex=0;
    
    unordered_map<int, int> sum; // prefix sum , index of the array  
    sum [0] = -1; //what if ps has only one zero say 1,2, -3,3 ==> 1,3,0,-3
    for (int i = 0; i < A.size(); i++) {
        ps += A[i];
        if (sum.find(ps) != sum.end()) {
            if (i - sum[ps] > stopIndex - startIndex){
                stopIndex = i;
                startIndex = sum[ps];
            }
        } else 
            sum[ps] = i;
    }

    
    vector<int> ans (A.begin()+startIndex+1, A.begin()+stopIndex +1 );
    return ans;
}