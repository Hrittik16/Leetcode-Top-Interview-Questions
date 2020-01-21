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
    // Time Complexity - O(n)
    // Space Complexity - O(1)
    void deleteNode(ListNode* node) {
        ListNode* curr = node;
        ListNode* next = curr->next;
        while(next->next != NULL) {
            curr->val = next->val;
            curr = next;
            next = next->next; 
        }
        curr->val = next->val;
        curr->next = NULL;
    }
};