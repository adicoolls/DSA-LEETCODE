class Solution {
public:
  static  bool compare(pair<int,int>a,pair<int,int>b){
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int i = nums.size();
        unordered_map<int,int>freq;
        for(auto it:nums){
            freq[it]++;
        }
        vector<pair<int,int>>vec;
        for(auto it:freq){
            vec.push_back(it);
        }
        sort(vec.begin(),vec.end(),compare);
        vector<int>ans;
        for(int i = 0; i<k;i++){
            ans.push_back(vec[i].first);
        }
        return ans;
    }
};