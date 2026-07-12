class Solution {
public:

    bool isVowel(char ch){
        return ch =='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    int maxVowels(string s, int k) {
        int left = 0;
        int right = 0;
        int vowelCount = 0;
        int maxVowel = 0;

        while(right < s.size()){
            if(isVowel(s[right])){
                vowelCount++;
            }
            if((right - left + 1) < k){
                right++;
            }
            else if((right - left + 1) == k){
                maxVowel = max(maxVowel,vowelCount);
                if(isVowel(s[left])){
                    vowelCount--;
                }

                left++;
                right++;

            }
        }
        return maxVowel;
    }
};