class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int>freq;
        for(int i = 0; i<n; i++){
            freq[arr[i]]++;
        }
        unordered_set<int>seen;
        for(auto it:freq){
            if(seen.find(it.second) != seen.end()){
                return false;
            }
            seen.insert(it.second);
        }
        return true;
    }
};