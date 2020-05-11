class Solution {
public:
    bool isValid(string s) { 
        stack <char> stk;
        char temp;
        for(int count = 0;count < s.length();count++) {
            if(s[count] == '(' || s[count] == '{' || s[count] == '[')
                stk.push(s[count]);
            if(s[count] == ')' || s[count] == '}' || s[count] == ']') {
                if(stk.empty())
                    return false;
                else {
                    temp = stk.top();
                    stk.pop();
                    if(!matchSymbol(temp,s[count]))
                        return false;
                }
            }
        }
        if(stk.empty())
                return true;
        else
            return false;
        return false;
    }     
       int matchSymbol(char a,char b) {
           if(a =='[' && b ==']')
               return 1;
           else if(a =='{' && b =='}')
               return 1;
           else if(a =='(' && b ==')')
               return 1;
           return 0;
       }
       
};