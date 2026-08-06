class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int zeroCount = 0;
        int left = 0;
        int maxlen = 0;
        for(int right = 0; right<n; right ++){
            if(nums[right] == 0){
                zeroCount++;
            }
            while(zeroCount > 1){
                if(nums[left] == 0){
                    zeroCount--;
                }
                left++;
            }
            maxlen = max(maxlen,(right-left + 1));
        }
        return maxlen - 1;
    }
};