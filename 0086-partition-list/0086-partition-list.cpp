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
    ListNode* partition(ListNode* head, int x) {
        vector<int> arr;
        ListNode* temp = head;
        while(temp!=NULL){
            if((temp->val)<x) arr.push_back(temp->val);
            temp=temp->next;  
        }
        temp=head;
        while(temp!=NULL){
            if((temp->val)>=x){
                arr.push_back(temp->val);
            }
            temp=temp->next;
        }
           temp = head;
           int n = arr.size();
           int i=0;
           while(temp!=NULL && i<n){
            temp->val=arr[i];
            i++;
            temp= temp->next;
           }  
           return head;               
    }
};