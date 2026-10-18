/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode*root, vector<int>& nums){
        if(root == nullptr){
            return;
        }

        nums.push_back(root->val);
        dfs(root->left, nums);
        dfs(root->right, nums);
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int>nums;
        dfs(root, nums);

        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[0]) {
                return nums[i];
            }
        }

        return -1;
    }
};