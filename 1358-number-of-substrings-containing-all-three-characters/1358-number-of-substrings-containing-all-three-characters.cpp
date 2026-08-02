class Solution {
public:
    int numberOfSubstrings(string s) {
           int n = s.size();
           int left = 0;
           int count = 0;
           int freq[3] = {0};
        for(int right = 0; right<n; right++){
            freq[s[right] - 'a']++;
            if(freq[1]>0 && freq[2] > 0 && freq[0] > 0){
                count += (n-right);
                freq[s[left] - 'a']--;
                left++;

                while(right - left + 1 >= 3){
                    if(freq[0]>0 && freq[1] > 0 && freq[2]>0){
                        count+=(n-right);
                        freq[s[left]- 'a']--;
                        left++;
                    }else{
                        break;
                    }
                }
            }
        }
        return count;
    }
};