class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int left = 0;
        int right = 0;
        int count = 0;
        int m_white = INT_MAX;

        while(right < n){
            if(blocks[right] == 'W'){
                count++;
            }
            if((right - left + 1) < k){
                right ++;
            }
            else if((right - left + 1) == k){
                m_white = min(count, m_white);

                if(blocks[left] == 'W'){
                    count--;
                }
                left++;
                right++;
            }
        }
        return m_white;
    }
};