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
    void dfs(TreeNode*node,string path,vector<string>&res){
        if(!node) return;
        path+=to_string(node->val);
        if(!node->left&&!node->right){
            res.push_back(path);
            return;
        }
        path+="->";
        dfs(node->left,path,res);
        dfs(node->right,path,res);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        dfs(root,"",ans);
        return ans;
    }
};