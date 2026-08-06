class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        // If k is 0 or 1, no positive product can be less than k
        if (k <= 1)
            return 0;

        int left = 0;
        int product = 1;
        int count = 0;

        for (int right = 0; right < nums.size(); right++) {

            product *= nums[right];

            while (product >= k) {
                product /= nums[left];
                left++;
            }

            // Count all valid subarrays ending at 'right'
            count += (right - left + 1);
        }

        return count;
    }
};