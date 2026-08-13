class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() < 3){
            return {};
        }
        sort(nums.begin(),nums.end());

        vector<vector<int>>result;

        for(int i = 0; i<nums.size()-2; i++){
            if(i > 0 && nums[i] == nums[i -1]){
                continue;
            }

            int left = i + 1;
            int right = nums.size() - 1;

            while(left < right){
                if(nums[i] + nums[left] + nums[right] == 0){
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    left++;
                    right--;

                    // skip duplicate left values;

                    while(left<right && nums[left] == nums[left - 1]){
                        left++;
                    }
                    // skip duplicate right values;

                    while(left<right && nums[right] == nums[right + 1]){
                        right --;
                    }
                    
                }
                else if(nums[i] + nums[left] + nums[right] > 0){
                    right = right - 1;
                }
                else{
                    left = left + 1;
                }
            }
        }
        return result;
    }
};