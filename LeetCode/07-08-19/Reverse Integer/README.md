#PROBLEM:REVERSE STRING
Given a 32-bit signed integer, reverse digits of an integer.
Assume we are dealing with an environment which could only store
integers within the 32-bit signed integer range: [−231,  231 − 1].
For the purpose of this problem, assume that your function returns 0
when the reversed integer overflows.	

Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21

###--------------------------------------------------
####myCode
class Solution {
public:
    int reverse(int x) {         
         long int rev=0,rem=0;
       if(x<-2147483648 || x>2147483647) {
            return 0;
         }
        while(x!=0) {
            rem=x%10;
            rev=rev*10+rem;
            if(rev<-2147483648 || rev>2147483647)
                return 0;
            x=x/10;
            
        }
        return rev;
        
        
    }
};