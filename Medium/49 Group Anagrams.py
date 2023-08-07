class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        sort_str = {} 
        # creat new list maping with sorted s
        # loop in list if the same sorted add to dic with key sorted s
        for s in strs :
            s_sort = "".join(sorted(s))
            if s_sort in sort_str:
                sort_str[s_sort].append(s)
            else:
                sort_str[s_sort] = [s]
            
        # convert dic to list as in Output
        return  sort_str.values()