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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>arr; // [1] [2,2] [0,3,0,3] ->false
            //[1] [2,2] [3,4,4,3] -> true
            for(int i=0;i<size;i++){
                TreeNode* curr=q.front();
                if(curr!=NULL){
                    arr.push_back(curr->val);
                    q.push(curr->left);
                    q.push(curr->right);
                }else{
                    arr.push_back(-101);
                }
                q.pop();

            }
            int left=0; int right=arr.size()-1;
            while(left <= right){
                if(arr[left]!=arr[right]){
                    return false;
                }
                left++;
                right--;
            } 
        }
        return true;
    }
};