
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0; // Child index
        int j = 0; // Cookie index

        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {
                i++; // Child is satisfied
            }

            j++; // Use this cookie or skip it
        }

        return i;
    }
};
