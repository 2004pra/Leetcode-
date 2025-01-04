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
           ListNode* dummy = new ListNode(-1);
        ListNode* current = dummy;

        // Traverse both lists
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                current->next = list1;
                list1 = list1->next;
            } else {
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }

        // Append the remaining nodes of the non-empty list
        if (list1 != nullptr) {
            current->next = list1;
        } else {
            current->next = list2;
        }

        // The merged list starts at dummy->next
        ListNode* mergedHead = dummy->next;
        delete dummy; // Free the dummy node to avoid memory leak
        return mergedHead;
    }
};