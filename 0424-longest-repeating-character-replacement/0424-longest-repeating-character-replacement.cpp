class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int maxlen = 0;
        int maxFreq = 0;
        map<char, int> mp;
        for (int right = 0; right < s.size(); right++) {
            mp[s[right]]++;
             maxFreq = 0;
            for (auto it : mp) {
                maxFreq = max(maxFreq, it.second);
            }
            while ((right - left + 1) - maxFreq > k) {
                mp[s[left]]--;
                if (mp[s[left]] == 0) {
                    mp.erase(s[left]);
                }
                left++;
            }
            // recalculate maxFreq after shrinking
            for (auto it : mp) {
                maxFreq = max(maxFreq, it.second);
            }
            
            maxlen = max(maxlen,right-left+1);

        }
        return maxlen;
        
    }
};