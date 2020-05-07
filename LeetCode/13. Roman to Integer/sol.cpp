class Solution {
public:
    int romanToInt(string s) {
        char ch;
        int val=0,sum=0;
        for(int i=0;i<s.length();i++) {
            ch=s[i];
            switch(ch) {
                case 'I':val=1;break;
                case 'V':val=5;break;
                case 'X':val=10;break;
                case 'L':val=50;break;
                case 'C':val=100;break;
                case 'D':val=500;break;
                case 'M':val=1000;break;    
            }
            if(s[i]=='I' && s[i+1]=='V') {
                val=4;
                i++;
            }
            if(s[i]=='I' && s[i+1]=='X') {
                val=9;
                i++;
            }
            if(s[i]=='X' && s[i+1]=='L') {
                val=40;
                i++;
            }
            if(s[i]=='X' && s[i+1]=='C') {
                val=90;
                i++;
            }
            if(s[i]=='C' && s[i+1]=='D') {
                val=400;
                i++;
            }
            if(s[i]=='C' && s[i+1]=='M') {
                val=900;
                i++;
            }
            sum=sum+val;
        }
        return sum;
    }
};