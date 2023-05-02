class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        # from collections import Counter
        st1, st2 = Counter(ransomNote), Counter(magazine)
        if st1 & st2 == st1:
            return True
        return False

# Counter fuction is as create counted map for each elemint in the string/list
# C++ :
# class Solution {
# public:
#     bool canConstruct(string ransomNote, string magazine) {
#         int counter[26] = {0};
#         for(char ch : magazine)
#             counter[ch - 'a']++;
       
#         for(char ch : ransomNote)
#             if(counter[ch - 'a']-- <= 0)
#                 return false;

#         return true;       
#     }
# };