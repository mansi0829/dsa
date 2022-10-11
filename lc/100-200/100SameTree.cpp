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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr && q==nullptr){
            return true;
        }
        else if(p==nullptr || q==nullptr){
            return false;
        }
        else if(p->val != q->val) {
            return false;
        }
        if(isSameTree(p->left, q->left) && isSameTree(p->right, q->right)) {
            return true;
        }
        return 0;
    }
    bool traverseLeft(TreeNode* p, TreeNode* q) {
        while(q->left==NULL || p->left==NULL) {
            if(p->left == q->left) {
                return true;
            }
            p = p->left;
            q = q->left;
            return false;
        }
        return 0;
    }
    bool traverseRight(TreeNode* p, TreeNode* q) {
        while(q->right==NULL || p->right==NULL) {
            if(p->right == q->right) {
                return true;
            }
            p = p->right;
            q = q->right;
            return false;
        }
        return 0;
    }
};