#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;

int solve(string A) {
    vector<int>count(26,0);
    
    for (int i = 0; A[i]; i++)
        count[A[i]-'a']++;

    int odd = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] & 1)
            odd++;
 
        if (odd > 1)
            return false;
    }
    return true;
 
}
