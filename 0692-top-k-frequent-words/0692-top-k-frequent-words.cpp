class Solution {
public:
    static bool compare(pair<string,int>a,pair<string,int>b){

        if(a.second == b.second){
        return a.first<b.first;
        }
        return a.second>b.second;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n = words.size();
        unordered_map<string,int>freq;
        for(auto it:words){
            freq[it]++;
        }
        vector<pair<string,int>>vec;
        for(auto it:freq){
            vec.push_back(it);
        }
        sort(vec.begin(),vec.end(), compare);

        vector<string>ans;
        for(int i= 0; i<k; i++){
            ans.push_back(vec[i].first);
        }
        return ans;

    }
};