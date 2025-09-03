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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
    ListNode* left1 = NULL;
        ListNode* right1= NULL;
        ListNode* temp = head;
        ListNode* ahead = NULL;
        ListNode* prev=NULL;
        int count = 1;   

        if(head == NULL || head->next==NULL || left==right){
            return head;
        }


        while(temp!=NULL){
            if(count==left-1){
                prev=temp;            
            }
            else if(count == left){
                left1 = temp;        
            }
            else if(count == right){
                right1 = temp;        
                ahead = temp->next;   
            }
            temp= temp->next;
            count++;
        }


        ListNode* cur = left1;
        ListNode* pre = ahead;   
        while(cur != ahead){
            ListNode* extra = cur->next;
            cur->next = pre;
            pre = cur;
            cur = extra;
        }

   
        if(prev != NULL){
            prev->next = pre;
        } else {
            head = pre;   
        }

        return head;
    }
};