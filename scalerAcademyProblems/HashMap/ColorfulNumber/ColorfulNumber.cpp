#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
#include<unordered_set>
using namespace std;

int colorful(int A) {

    string c = to_string(A);
    unordered_set<long long int> product;

    for (auto i = 0 ; i < c.size(); i++)
    {
        long long mul = 1;
        for (auto j = i; j <c.size(); j++){
            mul *= (long long int) (c[j]-'0');
            if (product.find(mul) != product.end())
                return 0;
            product.insert(mul);
        }
    }
    return 1;
}