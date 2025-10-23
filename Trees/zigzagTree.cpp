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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        stack<TreeNode*>s1;
        stack<TreeNode*>s2;
        s1.push(root);
        while(!s1.empty()||!s2.empty()){
            vector<int>temp;
            while(!s1.empty()){
                TreeNode* top=s1.top();
                temp.push_back(top->val);
                s1.pop();
                if(top->left!=NULL)
                s2.push(top->left);
                if(top->right!=NULL)
                s2.push(top->right);
            }
            if(temp.empty()==false)
            ans.push_back(temp);
            vector<int>temp2;
            while(!s2.empty()){
                TreeNode* top=s2.top();
                temp2.push_back(top->val);
                s2.pop();
                if(top->right!=NULL)
                s1.push(top->right); 
                if(top->left!=NULL)
                s1.push(top->left);
            }
            if(temp2.empty()==false)
            ans.push_back(temp2);
        }
        return ans;
    }
};