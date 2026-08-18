class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = nums.size() - 1;
        int count = 0;
        for(int i = nums.size() - 1; i>=0; i--){
            if(nums[i] == val){
                count++;
                swap(nums[i], nums[j]);
                 j--;
            }
           
        }
        return nums.size() - count;

    }
};