


vector<vector<int> > solve(int A) {
   vector< vector< int > > ans(A);
    for(int i = 1; i <= A; i++) {
        for(int j = 1; j <= i; j++)
            ans[i - 1].push_back(j);
        for(int j = i + 1; j <= A; j++)
            ans[i - 1].push_back(0);
    }
    return ans;
}
