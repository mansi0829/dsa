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
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int lsubtree = minDepth(root->left);
        int rsubtree = minDepth(root->right);
        if(root->left && root->right){
            if(lsubtree >rsubtree){
                return rsubtree+1;
            }else {
                return lsubtree+1;
            }
        }
        else {
            if(lsubtree <rsubtree){
                return rsubtree+1;
            }else {
                return lsubtree+1;
            }
        }
    }
    
};
