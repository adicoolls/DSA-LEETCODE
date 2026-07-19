class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();

        int left = 0;
        int right = 0;
        vector<int> ans;
        unordered_map<char, int> freqp;
        for (auto it : p) {
            freqp[it]++;
        }
        unordered_map<char, int> freqWindow;
        while (right < n) {
            freqWindow[s[right]]++;
            if ((right - left + 1) < m) {
                right++;
            } else if ((right - left + 1) == m) {
                if (freqp == freqWindow) {
                    ans.push_back(left);
                }
                freqWindow[s[left]]--;
                if (freqWindow[s[left]] == 0) {
                    freqWindow.erase(s[left]);
                }
                left++;
                right++;
            }
        }
        return ans;
    }
};