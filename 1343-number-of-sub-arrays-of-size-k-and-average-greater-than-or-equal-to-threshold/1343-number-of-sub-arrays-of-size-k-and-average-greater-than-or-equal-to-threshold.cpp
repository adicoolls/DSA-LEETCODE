class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int left = 0;
        int right = 0;
        int sum = 0;
        int count = 0;
        while(right < n){
            sum = sum + arr[right];
            if((right - left + 1)<k){
                right++;
            }
            else if((right - left + 1)== k){
                if((sum / k) >= threshold){
                    count++;
                }
                sum -= arr[left];
                left++;
                right++;

            }
        }
        return count;
    }
};