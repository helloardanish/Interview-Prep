// Path sum in a BT


// Easy


// https://leetcode.com/problems/path-sum/

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
    bool helper(TreeNode* root, int targetSum, int sum){
        if(root == NULL) return false;
        sum += root->val;
        
        cout << sum << " ";
        
        if(root->left == NULL && root->right == NULL){
            return (sum == targetSum) ? true : false;
        }
        return (helper(root->left, targetSum, sum) || helper(root->right, targetSum, sum));        
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {        
        return helper(root, targetSum, 0);
    }
};


// Happy Coding
// A R
