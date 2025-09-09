/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:


ListNode* reverse(ListNode* head){
      ListNode* temp = head;
      ListNode* prev = NULL;
      while(temp!=NULL){
        ListNode* extra = temp->next;
        temp->next=prev;
        prev= temp;
        temp=extra;
      }
      return prev;

}
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* new1 =  reverse(head);
         if(n==1 && new1->next==NULL){
            return NULL;
         }

         if(n==1 && new1->next!=NULL){
              ListNode* c = new1;
              ListNode* b = new1->next;
              delete c;
              new1=b;
              ListNode* new2= reverse(new1);
              return new2;
         }




         ListNode* temp1 = new1;
        for(int i =1;i<n;i++){
            if(i==n-1){
                ListNode* a = new1->next;
                new1->next=new1->next->next;
                delete a;
            }

            new1=new1->next;
            
        }
        
       ListNode* new3 =  reverse(temp1);
        return new3;
    }
};