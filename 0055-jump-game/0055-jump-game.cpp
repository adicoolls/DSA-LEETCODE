class Solution {
public:
    bool canJump(vector<int>& nums) {
        int finalposition = nums.size() - 1;
        for(int i = nums.size() - 2; i >= 0; i--){
            if(i + nums[i] >= finalposition){
                finalposition = i;
            }
        }

        return finalposition == 0;
    }
};