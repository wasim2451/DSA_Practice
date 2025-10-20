/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        if(head==NULL) return -1;
        if(head->next==NULL) return head->data;
        Node* first=head;
        Node* second=head;
        while(second!=NULL && second->next!=NULL){
            first=first->next;
            second=second->next->next;
        }
        return first->data;
    }
};