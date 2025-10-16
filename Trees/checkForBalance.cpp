class Solution {
  public:
    bool isBalanced(Node* root) {
        // code here
       if(root==NULL) return true;
       int lh=checkHeight(root->left);
       int rh=checkHeight(root->right);
       return abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right);
    }
    
    int checkHeight(Node* root ){
        if(root==NULL){
            return 0;
        }
        return max(
            checkHeight(root->left),
            checkHeight(root->right)
            )+1;
    }
};

//2nd Approach Better
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
    bool isBalanced(TreeNode* root) {
        int res=checkBalance(root);
        if(res==-1) return false;
        return true;
    }
    int checkBalance(TreeNode* root){
        //Base case 
        if(root==NULL) return 0;
        int lh=checkBalance(root->left);
        if(lh==-1) return -1;
        int rh=checkBalance(root->right);
        if(rh==-1) return -1;
        if(abs(lh-rh)>1){
            return -1;
        }else{
            return max(lh,rh)+1;
        }
    }
};
