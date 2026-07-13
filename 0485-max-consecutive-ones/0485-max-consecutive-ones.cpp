class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int final = 0;
        int curr_count = 0;

        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 1){
                curr_count++;
            }else{
                final = max(final, curr_count);
                curr_count = 0;
            }
        }
        return max(final, curr_count);
    }
};