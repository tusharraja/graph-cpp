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
int ans=0;

void f(TreeNode* root, int l,int r){
    if(root==nullptr){
        return ;
    }

    ans=max(ans,l+r);

    if(root->left){
        f(root->left,0,l+1);
    }

    if(root->right){
        f(root->right,r+1,0);
    }

    return;
}
    int longestZigZag(TreeNode* root) {

        f(root,0,0);
        return ans;


        
        
    }
};