/* Structure for tree and linked list
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node()
        : data(0)
        , left(NULL)
        , right(NULL) {}

    Node(int x)
        : data(x)
        , left(NULL)
        , right(NULL) {}
};
 */

// This function should return head to the DLL
class Solution {
  public:
    Node* head=NULL ;
    Node* prev=NULL;
    Node* bToDLL(Node* root) {
        // code here
        inOrder(root);
        return head;
    }
  public:
    void inOrder(Node* root){
        if(root==NULL){
            return ;
            //Base Case
        }
        inOrder(root->left);
        if(prev==NULL){
            head=root;
        }else{
            root->left=prev;
            prev->right=root;
        }
        //Setting current as prev
        prev=root;
        inOrder(root->right);
    }
};