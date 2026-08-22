class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
         unordered_map<char,int>freq;

         for(auto ch : magazine){
            freq[ch]++;
         }

         for(auto it : ransomNote){
            if(freq[it] == 0){
                return false;
            }
            freq[it]--;
         }
         return true;
    }
};