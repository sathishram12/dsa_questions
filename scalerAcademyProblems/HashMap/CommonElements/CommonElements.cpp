#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;

vector<int> solve(vector<int> &A, vector<int> &B) {
    vector<int> ans;
    unordered_map<int, int> freqDict;

    for (auto &i : A) {
        if (freqDict.find(i) == freqDict.end())
            freqDict[i] = 1;
        else 
            freqDict[i]++;
    }

    for (auto &i : B) {
        if (freqDict.find(i) != freqDict.end() && freqDict[i] > 0){
            ans.push_back(i);
            freqDict[i]--;
        }
    }
    return ans;
}
