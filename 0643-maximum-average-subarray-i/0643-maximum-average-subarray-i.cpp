class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int right = 0;
        double sum = 0;
        double avg = INT_MIN;
        while(right < n){
            sum = sum + nums[right];

            if((right - left + 1) < k){
                right++;

            }
            else if((right - left + 1) == k){
                if(avg<(sum/k)){
                    avg = sum / k;
                }
                sum -=nums[left];
                left++;
                right++;
            }
        }

        return avg;
    }
};