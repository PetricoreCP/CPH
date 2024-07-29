//Kadane's Algorithm

//O(n)
long long kadane(vector<long long> &v) {
    long long best = -1e18, curr = -1e18;
    for(int x = 0; x < v.size(); x ++) {
        curr = max(curr + v[x], v[x]);
        best = max(best, curr);
    }
    return best;
}
