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
    TreeNode*first=nullptr;
    TreeNode*second=nullptr;
    TreeNode*prev=nullptr;
public:
    void test(TreeNode*node){
        if(!node)return;
        test(node->left);
        if(prev&&prev->val>node->val){
            if(!first)first=prev;
            second=node;
        }
        prev=node;
        test(node->right);
    }
    void recoverTree(TreeNode* root) {
       test(root);
       swap(first->val,second->val);
    }
};