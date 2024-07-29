//Maximum Subarray Sum

//O(n^(3))
long long MaxSubSum(vector<long long> &v) {
    long long best = -1e18;
    for(int x = 0; x < v.size(); x ++) {
        for(int y = x; y < v.size(); y ++) {
            long long curr = 0;
            for(int z = x; z <= y; z ++) {
                curr += v[z];
            }
            best = max(best, curr);
        } 
    }
    return best;
}

//O(n^(2))
long long MaxSubSum(vector<long long> &v) {
    long long best = -1e18;
    for(int x = 0; x < v.size(); x ++) {
        long long curr = 0;
        for(int y = x; y < v.size(); y ++) {
            curr += v[y];
            best = max(best, curr);
        }
    }
    return best;
}

//Kadane's algorithm

//O(n)
long long MaxSubSum(vector<long long> &v) {
    long long best = -1e18, curr = -1e18;
    for(int x = 0; x < v.size(); x ++) {
        curr = max(curr + v[x], v[x]);
        best = max(best, curr);
    }
    return best;
}
