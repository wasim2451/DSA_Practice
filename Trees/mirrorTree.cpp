class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

class Solution {
  public:
    void mirror(Node* root) {
        // code here
        if(root==NULL){
            return ;
        }
        if(root->left && root->right){
           Node* temp=root->left;
           root->left=root->right;
           root->right=temp;
        }else if(!root->left || !root->right){
            if(root->left==NULL){
                root->left=root->right;
                root->right=NULL;
            }else{
                root->right=root->left;
                root->left=NULL;
            }
        }
        mirror(root->left);
        mirror(root->right);
        
    }
};