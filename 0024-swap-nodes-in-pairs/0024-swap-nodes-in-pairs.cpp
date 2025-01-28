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
    ListNode* swapPairs(ListNode* head) {
            // Base case: If there are less than two nodes, return the head
        if (!head || !head->next) return head;

        // Pointers to swap the first two nodes
        ListNode* first = head;
        ListNode* second = head->next;

        // Swap the first pair and recursively call for the rest
        first->next = swapPairs(second->next);
        second->next = first;

        // Return the new head (second node)
        return second;
    }
};