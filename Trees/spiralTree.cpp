/*
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        // code here
        vector<int>ans;
        int flag=true;//left to Right
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
           stack<int>s;
           int size=q.size();
           for(int i=0;i<size;i++){
               Node* top=q.front();
               q.pop();
               if(top->left!=NULL)
               q.push(top->left);
               if(top->right!=NULL)
               q.push(top->right);
               if(flag){
                   ans.push_back(top->data);
               }else{
                   s.push(top->data);
               }
           }
           flag=!flag;
           while(!s.empty()){
               int top=s.top();
               ans.push_back(top);
               s.pop();
           }
        }
        return ans;
    }
};