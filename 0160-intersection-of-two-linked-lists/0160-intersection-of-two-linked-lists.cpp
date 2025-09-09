/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
             ListNode* temp1 = headA;
             ListNode* temp2 = headB;
            int count1 = 0;
            int count2 = 0; 
             while(temp1!=NULL){
                 temp1= temp1->next;
                 count1++;
             }
             while(temp2!=NULL){
                 temp2= temp2->next;
                 count2++;
             }


               temp1 = headA;
               temp2 = headB;

             if(count2>count1){
               
                int count3 = count2 - count1;
                for(int i=0;i<count3;i++){
                    temp2=temp2->next;
                }
             }
             else{
                int count3 = count1 - count2;
                for(int i =0; i<count3;i++){
                    temp1= temp1->next;
                } 
             }

             while(temp1!=NULL && temp2!=NULL){
                
                if(temp1==temp2){
                return temp1;
                }
                temp1=temp1->next;
                temp2=temp2->next;
             }
        
            return NULL;
        

    }
};
