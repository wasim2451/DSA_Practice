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
    Node* insert(Node* root, int key) {
        //  code  here
        Node* newNode=new Node(key);
        if(root==NULL) return newNode;
        Node* prev=NULL;
        Node* curr=root;
        while(curr!=NULL){
            prev=curr;
            if(curr->data > key){
                //Left Side
                curr=curr->left;
            }else if(curr->data < key){
                // right side
                curr=curr->right;
            }else{
                //Equal
                //return root
                return root;
            }
        }
        //Curr => NULL 
        if(prev->data > key ){
            //Left side 
            prev->left=newNode;
        }else{
            prev->right=newNode;
        }
        return root;
    }
};