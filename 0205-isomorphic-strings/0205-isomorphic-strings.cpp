class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char,char>mp1;
        unordered_map<char,char>mp2;

        for(int i = 0; i<s.size(); i++){
            //s[i] is already mapped, it must map to t[i];
            if(mp1.count(s[i])){
                if(mp1[s[i]] != t[i]){
                    return false;
                }
            }
            //t[i] is already mapped, it must came from s[i];
            if(mp2.count(t[i])){
                if(mp2[t[i]] != s[i]){
                    return false;
                }
            }
                //create/update the mapping;
                mp1[s[i]] =t[i];
                mp2[t[i]] =s[i];
            
        }

        return true;
    }
};