//Generating subsets

//O(2^(n))
vector<vector<long long>> genSubs(vector<long long> &v) {
    vector<vector<long long>> subsets;
    for(int i = 0; i < (1 << v.size()); i ++) {
        vector<long long> s;
        for(int j = 0; j < v.size(); j ++) {
            if((i >> j) & 1) {
                s.push_back(v[j]);
            }
        }
        subsets.push_back(s);
    }
    return subsets;
}
