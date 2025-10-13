
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
    Node* getNode(Node* root){
        Node* curr=root->right;
        while(curr!=NULL && curr->left!=NULL){
            curr=curr->left;
        }
        return curr;
    }
    Node *deleteNode(Node *root, int x) {
        // code here
        if(root==NULL) return root ;
        if(root->data > x){
            //left side
            root->left=deleteNode(root->left,x);
        }else if(root->data < x){
            //right side
            root->right=deleteNode(root->right,x);
        }else{
            //Equal
            //case 1 : left Node is NULL or both NULL
            if(root->left==NULL){
                Node* temp=root->right;
                delete(root);
                return temp;
            }
            //case 1 : left Node is NULL or both NULL
            else if(root->right==NULL){
                Node* temp=root->left;
                delete(root);
                return temp;
            }
            //case 3 : Middle Node then find inorder successor and replace it 
            else{
                Node* inorderSuccessor=getNode(root);
                root->data=inorderSuccessor->data;
                root->right=deleteNode(root->right,inorderSuccessor->data);
            }
        }
        return root;
    }
};