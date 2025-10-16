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
    int findSecondMinimumValue(TreeNode* root) {
        //Level order traversal
        queue<TreeNode*>q;
        bool flag=false;
        q.push(root);
        //Declare the Numbers
        int min= INT_MAX;
        int smin= INT_MAX;
        while(!q.empty()){
            TreeNode* curr=q.front();
            int x=curr->val;
            if(x<=smin){
               if(x<=min){
                min=x; // 2
               }else{
                smin=x;
                flag=true;
               }
               
            }
            q.pop();
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
        //queue will be empty
        if(flag==false){
            return -1;
        }
        return smin;


    }
};