//Generating Permutations

//O(n!)
vector<vector<long long>> permutations;
vector<long long> p;
vector<bool> chosen;

void genPerms(vector<long long> &v) {  
    if(p.size() == v.size()) {
        permutations.push_back(p);
    }
    else {
        for(int i = 0; i < v.size(); i ++) {
            if(chosen[i]) continue;
            chosen[i] = true;
            p.push_back(v[i]);
            genPerms(v);
            chosen[i] = false;
            p.pop_back();
        }
    }
}
