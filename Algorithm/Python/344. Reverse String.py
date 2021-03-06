# Problem from: https://leetcode.com/problems/reverse-string/description/

"""
Write a function that takes a string as input and returns the string reversed.

Example:
Given s="hello", return "olleh".
"""

class Solution:
    def reverseString(self, s):
        """
        :type s: str
        :rtype: str
        """
        return s[::-1]