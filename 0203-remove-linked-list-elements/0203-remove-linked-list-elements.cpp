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
    ListNode* removeElements(ListNode* head, int val) {
        while(head != NULL && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        if (head == NULL) {
            return NULL;
        }

        ListNode* temp1 = head;
        while (temp1 != NULL && temp1->next != NULL) {
            if (temp1->next->val == val) {
                ListNode* extra = temp1->next;
                temp1->next = temp1->next->next;
                delete extra;
            } else {
                temp1 = temp1->next;
            }
        }

        return head;
    }
};