vector<int> leftView(Node *root) {
        // code here
        queue<Node* >q;
        vector<int>ans;
        if(root==NULL) return ans;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                Node* curr=q.front();
                if(i==0) ans.push_back(curr->data);
                q.pop();
                if(curr->left!=NULL) q.push(curr->left);
                if(curr->right!=NULL) q.push(curr->right);
            }
        }
        return ans;
}