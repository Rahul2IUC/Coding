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