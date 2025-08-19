/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* curr = head;
        if(head==NULL){
            return head;
        }
while(curr!=NULL){
    if(curr->child!=NULL){
          
          Node* extra = curr->next;
          curr-> next = flatten(curr->child);
          curr->next->prev= curr;
          curr->child=NULL;

          while(curr->next!=NULL){
            curr= curr->next ;

          }

          if(extra!=NULL){
            curr->next = extra;
            extra->prev = curr;
          }

    }
    curr=curr->next;
}
return head;
    }
};