class Solution {
  public:
    int findCeil(Node* root, int x) {
        // code here
        if(root==NULL) return -1;
        Node* res=NULL;
        Node* curr=root;
        while(curr!=NULL){
            if(curr->data==x){
                //Found
                return x;
            }else if(curr->data > x){
                // Potential Found
                res=curr;
                curr=curr->left;
            }else if(curr->data < x){
                curr=curr->right;
            }
        }
        //curr->NULL
        return res==NULL ? -1 : res->data;
    }
};
