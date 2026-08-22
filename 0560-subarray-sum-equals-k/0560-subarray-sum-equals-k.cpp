class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         unordered_map<int,int>freq;

         freq[0] = 1;
         int prefix_sum = 0;
         int count = 0;

         for(auto num : nums){
            prefix_sum += num;

            if(freq.count(prefix_sum - k)){
                count += freq[prefix_sum - k];
            }

            freq[prefix_sum]++;
         }
         return count;
    }
};