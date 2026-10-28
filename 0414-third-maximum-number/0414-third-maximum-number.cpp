
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st(nums.begin(), nums.end());

        vector<int> arr(st.begin(), st.end());

        if (arr.size() < 3) {
            return arr.back();
        }

        return arr[arr.size() - 3];
    }
};