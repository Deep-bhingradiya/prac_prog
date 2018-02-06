class Solution:
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        result_str = ''
        input_str = s.split(' ')
        for each in input_str:
            result_str = result_str + each[::-1] + ' '
        return result_str[:-1]
