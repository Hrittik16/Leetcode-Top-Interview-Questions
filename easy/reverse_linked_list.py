# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None


class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        # Iterative Solution
        """
        if head is None:
            return head
        prev = None
        curr = head
        next = head.next
        while next is not None:
            curr.next = prev
            prev = curr
            curr = next
            next = next.next
        curr.next = prev
        prev = curr
        curr = next
        head = prev
        return head
        """
        # Recursive Solution
        if head is None:
            return head
        