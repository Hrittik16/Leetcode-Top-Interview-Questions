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
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    // Time Complexity - O(1)
    // Space Complexity - O(1)
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        ListNode *next = node->next;
        node->next = node->next->next;
        delete next;
    }
};