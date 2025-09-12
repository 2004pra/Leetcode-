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


    ListNode*  Prev(ListNode*  temp){
        if (temp == NULL || temp->next == NULL) return NULL;
         while(temp->next->next!=NULL){
            
            temp=temp->next;
         }
        
            return temp;
    }


    void reorderList(ListNode* head) {
       if (!head || !head->next) return;
      ListNode* curr = head;
      

      while(curr!=NULL && curr->next !=NULL){
       ListNode* prev = Prev(curr);
       
       if (prev == NULL) break;

       ListNode* last = prev->next;
       ListNode* extra = curr->next;
       curr->next = last;
       last->next = extra;
       prev->next = NULL;
       curr = extra;
      }
    }
};