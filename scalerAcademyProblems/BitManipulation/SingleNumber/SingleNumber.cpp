#include <vector>
#include <iostream>
using namespace std;
int singleNumber(const vector<int> &A) {
    int ans = 0;
    for (int i : A)
        ans = ans ^ i;
    
    return ans;
    
}

int main() {
    vector<int> A = {1,2,2,3,1};
    singleNumber(A);
}