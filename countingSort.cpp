//Counting Sort

//O(n)
void countingSort(vector<int> &v, int m) {
    vector<int> freq(m + 1);
    for(int i = 0; i < v.size(); i ++) {
        freq[v[i]] ++;
    }
    int index = 0;
    for(int i = 0; i <= m; i ++) {
        for(int j = 0; j < freq[i]; j ++) {
            v[index] = i;
            index ++;
        }
    }
}
