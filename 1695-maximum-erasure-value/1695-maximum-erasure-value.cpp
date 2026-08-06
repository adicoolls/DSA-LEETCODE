class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int left = 0;
        int sum = 0;
        int maxsum = INT_MIN;
        unordered_set<int>st;
        for(int right = 0; right <nums.size(); right++){
            while(st.find(nums[right]) != st.end()){
                 st.erase(nums[left]);
                sum -= nums[left];
                left++;
               
            }
            st.insert(nums[right]);
            sum += nums[right];
            maxsum = max(sum,maxsum);
        }
        return maxsum;
    }
};