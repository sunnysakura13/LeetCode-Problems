# Problem from: https://leetcode.com/problems/fizz-buzz/description/

"""
Description:
Write a program that outputs the string representation of numbers from 1 to n.
But for multiples of three it should "Fizz" instead of the number and for multiples of five output "Buzz". 
For numbers which are multiples of both three and five output "FizzBuzz"

Example:
n = 15,

Return:
[
    "1",
    "2",
    "Fizz",
    "4",
    "Buzz",
    "Fizz",
    "7",
    "8",
    "Fizz",
    "Buzz",
    "11",
    "Fizz",
    "13",
    "14",
    "FizzBuzz"
]
"""

class Solution:
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        return ['Fizz' * (not i % 3) + 'Buzz' * (not i % 5) or str(i) for i in range(1, n+1)]