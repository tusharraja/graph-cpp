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

 #include<bits/stdc++.h>
 using namespace std;
 

class Solution {
public:

vector<string> arr;


string s;

vector<char> alp;

void f(TreeNode* root){
    if(root==nullptr){
        return ;
    }

    if(root->left==nullptr and root->right==nullptr){

         s.push_back(alp[root->val]);
        arr.push_back(s);
         s.pop_back();


        
        return;
    }

    s.push_back(alp[root->val]);



    if(root->left){
        f(root->left);
    }

    if(root->right){
        f(root->right);
    }

    s.pop_back();


}
    string smallestFromLeaf(TreeNode* root) {

        for(char x='a';x<='z';x++){
            alp.push_back(x);
        }


        f(root);

        for(auto &x:arr){
            reverse(x.begin(),x.end());
        }

        sort(arr.begin(),arr.end());

        return arr[0];


        
        
    }
};