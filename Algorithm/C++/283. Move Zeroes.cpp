/* Problem from: https://leetcode.com/problems/move-zeroes/description/

Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example: 
Input: [0,1,0,3,12]
Output: [1,3,12,0,0]

Note: 
1. You must do this in-place without making a copy of the array.
2. Minimize the total number of operations.
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int lastNonZeroIndex=0, cur=0; cur < nums.size(); cur++) {
            if (nums[cur] != 0)
                swap(nums[lastNonZeroIndex++], nums[cur]);
        }
    }
};