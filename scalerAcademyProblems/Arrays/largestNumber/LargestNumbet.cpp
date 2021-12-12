#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool largestCmpfn(string a, string b)
{   
    return a+b>b+a;
}


string largestNumber(const vector<int> &A) {

    vector<string> b;
    for(int i=0;i<A.size();i++){
        b.push_back(to_string(A[i]));
    }
    sort(b.begin(),b.end(),largestCmpfn);

    std::string ans;
    for(int i=0;i<b.size();i++){
       ans+=b[i];
    }

    int i=0; 
    while(ans[i]=='0' && i+1<ans.size()){
        i++;
    }
    return ans.substr(i);
}
