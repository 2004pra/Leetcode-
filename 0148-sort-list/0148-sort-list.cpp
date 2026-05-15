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
    ListNode* sortList(ListNode* head) {
        if(head==NULL) return NULL;
        list<int> lt;
        ListNode* temp = head;
        while(temp!=NULL){
            lt.push_back(temp->val);
            temp=temp->next;
        }
        lt.sort();
        temp = head;
        auto it = lt.begin();
        while (temp != nullptr) {
        temp->val = *it;
        it++;
        temp = temp->next;
    }
    return head;
    }
};