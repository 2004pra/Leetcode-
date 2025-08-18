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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        

      ListNode dummy;
      ListNode* tail = &dummy;
      dummy.next = NULL;

      while(list1!=NULL && list2!=NULL){
           
           //case for less than 

           while(list1!=NULL && list2!=NULL && list1->val < list2->val){
                   tail->next = list1;
                   tail=tail->next;
                   list1=list1->next;
           }

           while(list1!=NULL && list2!=NULL && list1->val == list2->val){
              
                ListNode* list3 = list1->next;
                ListNode* list4 = list2->next;

                tail->next = list1;
                tail = tail->next;

                tail->next= list2;
                tail = tail->next;

                list1=list3;
                list2=list4;

           }
           while(list1!=NULL && list2!=NULL && list1->val > list2->val){
                      tail->next = list2;
                     tail=tail->next;
                     list2=list2->next;
           }


      }
      if(list1!=NULL) tail->next= list1;
      if(list2!=NULL) tail->next= list2;

          return dummy.next;
    }
};