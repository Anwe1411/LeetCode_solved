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
private:
   int dfsHt(TreeNode*root){
    if(!root)return 0;
    int leftHt=dfsHt(root->left);
    if(leftHt==-1) return -1;
    int rightHt=dfsHt(root->right);
    if(rightHt==-1)return -1;
    if(abs(leftHt-rightHt)>1)return -1;
    return 1+max(leftHt,rightHt);
   }
public:
    bool isBalanced(TreeNode* root) {
        return dfsHt(root)!=-1;
    }
};