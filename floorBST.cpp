class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
  public:
    int findFloor(Node* root, int x) {
        // code here
        Node* res=NULL;
        Node* curr=root ;
        while(curr!=NULL){
            if(curr->data==x){
                return x;
            }else if (curr->data > x ){ // 9 > 8.5 -> Left
                curr=curr->left;
            }else if (curr->data < x){
                //Right of Node can be Greater than Node or X 
                // So Node is also a Potential Candidate
                res=curr;
                //Move the curr
                curr=curr->right;
            }
        }
        if(res==NULL){
            return -1;
        }
        return res->data;
    }
};