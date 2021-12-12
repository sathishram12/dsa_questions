#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
#include<unordered_set>
using namespace std;

int diffPossible(const vector<int> &A, int B) {
    if (A.size() < 2 || B < 0) 
        return 0;

    unordered_set<int> st;
    
    for(auto i = 0; i < A.size(); i++)
    {
        int Aj = A[i] - B;
        
        int Ai = A[i] + B;
        
        if (st.find(Aj) != st.end()) 
            return 1;
        if (st.find(Ai) != st.end()) 
            return 1;
            
        st.insert(A[i]);
    }

    return 0;
}