# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        delay = start = head
        for i in range(n):
            delay = delay.next 

        if delay == None:
            return head.next   
        while(delay.next != None) :
            head = head.next
            delay = delay.next
        head.next = head.next.next
            
        return start