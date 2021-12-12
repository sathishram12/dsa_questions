#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int solve(string A, int B) {
    vector<int> count(26,0);

    if (B == 0 || A.size() < B)
        return A.size();
        
    for (int i=0; i <A.size(); i++ )
        count[A[i] -'a']++;
    
    int no_of_distinct_characters =0;
    for (int i=0; i < 26; i++){
        if (count[i]!=0) {
            no_of_distinct_characters++;
        }
    }

    sort (count.begin(), count.end());
    for (int i =0; i < 26; i++){
        if (count[i]!=0 && B-count[i]>=0) {
            no_of_distinct_characters--;
            B-=count[i];
        }
 
    }
    return no_of_distinct_characters;
    
}
