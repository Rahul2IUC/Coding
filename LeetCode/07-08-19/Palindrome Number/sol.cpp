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