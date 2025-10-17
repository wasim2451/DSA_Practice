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
    int maxLevelSum(TreeNode* root) {
        if(root==NULL) return 0;
        int level=0;
        int maxSum= INT_MIN;
        queue<TreeNode*>q;
        q.push(root);
        int currentLevel=0;
        while(!q.empty()){
            int sum=0;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* curr=q.front();
                sum+=curr->val;
                q.pop();
                if(curr->left!=NULL)
                q.push(curr->left);
                if(curr->right!=NULL)
                q.push(curr->right);
            }
            currentLevel++;
            if(sum > maxSum){
                maxSum=sum;
                level=currentLevel;
            }
        }
        return level;
    }
};