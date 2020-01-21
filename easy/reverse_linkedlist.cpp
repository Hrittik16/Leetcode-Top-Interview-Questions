/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* new_head;
void reverse(ListNode* p) {
    if(p == NULL || p->next == NULL) {
        new_head = p;
        return;
    }
    reverse(p->next);
    ListNode* q = p->next;
    q->next = p;
    p->next = NULL;
}

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // Iterative Solution
        // Time Complexity : O(n)
        // Space Complexity : O(1)
        /*
        ListNode *prev, *curr, *next;
        curr = head;
        prev = NULL;
        next = NULL;
        while(curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
        */
        
        // Recursive Solution
        // Time Complexity - O(n)
        // Space Complexity - O(n)
        reverse(head);
        return new_head;
    }
};