#PROBLEM: PALINDROME NUMBER
Determine whether an integer is a palindrome.
An integer is a palindrome when it reads the same backward as forward.
Example 1:

Input: 121
Output: true
Example 2:

Input: -121
Output: false
Explanation: From left to right, it reads -121.
From right to left, it becomes 121-.
Therefore it is not a palindrome.
Example 3:

Input: 10
Output: false
Explanation: Reads 01 from right to left.
Therefore it is not a palindrome.
--------------------------------------------
##mYCode
class Solution {
public:
    bool isPalindrome(int x) {
        long int rem=0,rev=0,temp=x;
        if(x<0 || x%10==0 && x!=0)
            return false;
        while(x>rev)
        {
            rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }
        if(x==rev)
            return true;
        else
            return false;
    
    }
};