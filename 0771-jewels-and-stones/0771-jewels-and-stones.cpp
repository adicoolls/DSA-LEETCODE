class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>freq;
        for(auto ch : jewels){
            freq[ch]++;
        }
        int count = 0;
        for(auto ch : stones){
            if(freq.count(ch)){
                count++;
            }
        }
        return count;
    }
};