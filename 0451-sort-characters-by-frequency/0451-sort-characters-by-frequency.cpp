class Solution {
public:
    static bool compare(pair<char,int>a,pair<char,int>b){
        return a.second>b.second;
    }
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char,int>freq;
        for(auto it: s){
            freq[it]++;
        }
        vector<pair<char,int>>vec;
        for(auto it:freq){
            vec.push_back(it);
        }

        sort(vec.begin(),vec.end(),compare);

        string ans = "";

        for(auto it:vec){
            for(int i = 0; i<it.second;i++){
                ans +=it.first;
            }
        }

        return ans;

    }
};