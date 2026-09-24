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
    void dfs(TreeNode* root, int TargetSum, vector<int>path, vector<vector<int>>&allpaths){
        if(root == nullptr){
            return;
        }
        path.push_back(root->val);

        if(root->left == nullptr && root->right == nullptr){
            if(TargetSum == root->val){
                allpaths.push_back(path);
            }
        }
        dfs(root->left, TargetSum-root->val, path, allpaths);
        dfs(root->right, TargetSum-root->val,path, allpaths);

        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>path;
        vector<vector<int>>allpaths;
        dfs(root, targetSum, path, allpaths);
        return allpaths;
    }
};