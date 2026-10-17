class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest = 0;

        // find the largest value
        for(int i = 1 ; i<nums.size(); i++){
            if(nums[i] > nums[largest]){
                largest = i;
            }
        }

        // check whether the largest is at least twice every other element;
        for(int i = 0; i<nums.size(); i++){
            if(i != largest && nums[largest] < 2 * nums[i]){
                return -1;
            }
        }
        return largest;
    }
};