#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
#include<set>
using namespace std;

int longestConsecutive(const vector<int> &A) {
    set <int> s1;
    for (auto &i : A) {
        s1.insert(i);
    }

    int ans=0;
    for (int i = 0 ; i < A.size(); i++) {
        if(s1.find(A[i]-1) == s1.end()){
            int j = A[i];
            while ( s1.find (j) != s1.end ())
                j++;
            ans = ans < j-A[i] ? j-A[i]: ans;
        }
    }
    return ans;
}
