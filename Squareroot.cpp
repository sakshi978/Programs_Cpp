/*Implement int sqrt(int x).

Compute and return the square root of x, where x is guaranteed to be a non-negative integer.

Since the return type is an integer, the decimal digits are truncated and only the integer part of the result is returned.

Example 1:

Input: 4
Output: 2
*/
class Solution {
public:
    int mySqrt(int x) {
        int res = 0;
        if(x == 0)
        {
            res = 0;
        }
        else if(x == 1)
        {
            res = 1;
        }
        else
        {
            res = sqrt(x);
        }
        return res;
    }
};
