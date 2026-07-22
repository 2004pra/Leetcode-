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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* curr = NULL;
        ListNode* extra = NULL;
        long long sum = 0;
        while(temp!=NULL){
            sum+=temp->val;
           if(temp->val==0 && curr==NULL){
               curr  = new ListNode(sum);
               extra = curr;
               curr->next = NULL;
               sum = 0;
           }
           else if(temp->val==0 && curr!=NULL){
               ListNode* extra1= new ListNode(sum);
               extra->next = extra1;
               extra = extra1;
               sum = 0;
           }
           temp= temp->next;
        }
        return curr;
    }
};