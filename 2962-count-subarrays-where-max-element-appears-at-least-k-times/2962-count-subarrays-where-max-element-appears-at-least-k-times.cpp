class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int left = 0;
        long long count = 0;
        int maxi = *max_element(nums.begin(),nums.end());
        int n = nums.size();
        int maxCount=0;
        for(int right = 0; right <n; right++){
            
            if(nums[right] == maxi){
                  maxCount++;
            }
            while(maxCount >=k){
                count += (n - right);
                if(nums[left] == maxi){
                    maxCount--;
                }
                left++;

            }
        }
        return count;
    }
};