class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>freq;
        for(auto ch: s){
            freq[ch]++;
        }
        int count = 0;
        bool hasOdd = false;
        for(auto it : freq){
             if(it.second % 2 == 0){
                count += it.second;
             }else{
                count += it.second -1;
                hasOdd = true;
             }
        }
        if(hasOdd){
            count++;
        }
        return count;
    }
};