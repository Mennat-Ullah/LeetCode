# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def deleteNode(self, node):
        """
        :type node: ListNode
        :rtype: void Do not return anything, modify node in-place instead.
        """
        # Move to the next node
        nextNode = node.next
        node.val = nextNode.val
        node.next = nextNode.next

        # Delete the next node as we copy it's data
        del(nextNode)