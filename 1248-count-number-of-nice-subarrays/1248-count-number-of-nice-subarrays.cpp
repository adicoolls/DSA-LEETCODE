class Solution {
public:
    int atmostKodd(vector<int>nums,int k){
        int left = 0;
        int count = 0;
        int subarray = 0;
        for(int right = 0; right < nums.size(); right++){
            if(nums[right]%2==1){
                count++;
            }
            while(count > k){
                if(nums[left] % 2 == 1 ){
                    count --;
                }
                left++;
            }
           subarray  += (right-left + 1);
            
        }
        return subarray;
     

    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmostKodd(nums,k) - atmostKodd(nums, k-1);
    }
};