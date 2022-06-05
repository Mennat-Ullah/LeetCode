class Solution(object):
    def repeatedSubstringPattern(self, s):
        """
        :type s: str
        :rtype: bool
        """
        news = (s+s)[1:-1]
        return news.find(s) != -1
        
