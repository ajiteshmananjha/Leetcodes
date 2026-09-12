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
    void swaap(TreeNode* rot)
    {
        if(rot==nullptr)
        {
            return;
        }
        swaap(rot->left);
        swaap(rot->right);
        TreeNode* temp=rot->left;
        rot->left=rot->right;
        rot->right=temp;
    }

    TreeNode* invertTree(TreeNode* root) {
        swaap(root);
        return root;
    }
};