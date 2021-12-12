#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;

int getSum(int A, int B, vector<int> &C) {
    unordered_map<int, int>hashmap;

    int sum = 0;
    bool flag = false;
    for (int i = 0; i < A; i++){
        if (hashmap.find(C[i]) != hashmap.end()) {
            hashmap[C[i]]++;
        } else 
            hashmap[C[i]] = 1;
    }

    unordered_map<int, int>:: iterator p;
    for (p = hashmap.begin(); p != hashmap.end(); p++){
        if (p->second == B) {
            sum += p->first;
            flag = true;
        } 
    }
    if (!flag) return -1;
    return sum % 1000000007;

}
