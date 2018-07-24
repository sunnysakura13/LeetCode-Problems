// Problem from: https://leetcode.com/problems/excel-sheet-column-number/description/

/*
 * Description
 * Given a column title as appear in an Excel sheet, return its corresponding column number.
 *
 * For example: 
 *  A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28 
    ...
 *
 * Example 1:
   Input: "A"
   Output: 1
 *
 * Example 2:
   Input: "AB"
   Output: 28
 *
 * Example 3:
   Input: "ZY"
   Output: 701
 */

class Solution {
public:
    int titleToNumber(string s) {
        int col = 0;
        for (int i = 0; i < s.length(); i++) {
            col *= 26;
            col += s[i] - 'A' + 1;
        }
        return col;
    }
}