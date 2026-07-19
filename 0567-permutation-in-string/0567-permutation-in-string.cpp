class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        int left = 0;
        int right = 0;
        unordered_map<char,int>freq1;
        for(auto it:s1){
            freq1[it]++;
        }
        unordered_map<char,int>freqWindow;
        while(right<m){
            freqWindow[s2[right]]++;
            if((right - left + 1) <n){
                right++;
            }
            else if((right - left + 1) == n){
                if(freq1 == freqWindow){
                    return true;
                }
                freqWindow[s2[left]]--;
                if(freqWindow[s2[left]] == 0){
                    freqWindow.erase(s2[left]);
                }
                left++;
                right++;
            }
        }
        return false;
    }
};