#include<vector>
#include<iostream>

using namespace std;

vector<int>grayCode(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    if  (A == 1) {
        vector<int> a1 = {0,1};
        return a1;
    }

    vector<int> result = grayCode(A-1);
    vector<int>result1;
    for (int i = result.size()-1 ; i>=0 ; i--){
        result1.push_back(result[i]+ pow(2,A-1));
    }
    result.insert( result.end(), result1.begin(), result1.end() );
    return result;
