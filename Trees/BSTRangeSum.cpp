/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    int nodeSum(Node* root, int l, int r) {
        // code here
        int sum=0;
        vector<int>ans;
        inorder(root,ans);
        for(int i=0;i<ans.size();i++){
            int item=ans[i];
            if(item >=l && item <=r){
                sum+=item;
            }
        }
        
        return sum ;
        
    }
  public:
    void inorder(Node* root , vector<int>&ans){
        if(root==NULL){
            return ;
        }
        //Left Root Right (Inorder)
        inorder(root->left , ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
};
