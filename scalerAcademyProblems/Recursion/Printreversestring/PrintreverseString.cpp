#include<iostream>
#include<string>
using namespace std;

void printreversestring(string s, int n){
    if (n == -1)
        return;
    cout<<s[n];
    n--;
    printreversestring(s,n);
}
int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    string s;
    cin>>s;
    printreversestring(s,s.size()-1);
    return 0;
}