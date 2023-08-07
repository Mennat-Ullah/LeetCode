class Solution(object):
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        set_nums = set(nums)
        max_con = 0
        for n in nums:
            # this condition to start only from the beginning of the seq to reduse time
            if n-1 not in set_nums:
                count = 1
                number = n + 1
                # find the end of the seq
                while number in set_nums:
                    count += 1
                    number += 1
                max_con = max(max_con , count)
        return max_con