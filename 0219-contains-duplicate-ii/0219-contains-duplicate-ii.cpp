class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>ls;

        for(int i = 0; i<nums.size(); i++){
            if(ls.count(nums[i])){
                if(i-ls[nums[i]] <= k){
                    return true;
                }
               
            }
             ls[nums[i]] = i;
        }
        return false;

    }
};