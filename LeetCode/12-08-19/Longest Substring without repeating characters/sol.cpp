#define NOF 256
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int n = s.size(); 
         int cur = 1,max = 1,prev;
         int* v = new int[sizeof(int) * NOF]; 
        if (s =="")
            return 0;
         for (int i = 0; i < NOF; i++) 
             v[i] = -1; 
          v[s[0]] = 0;
          for (int i = 1; i < n; i++) { 
               prev = v[s[i]];
               if (prev == -1 || i - cur > prev) 
               cur++; 
                else { 
           
                      if (cur > max) 
                      max = cur; 
  
                      cur = i - prev; 
        } 
  
        
        v[s[i]] = i; 
    } 
  
    
    
    if (cur > max) 
        max = cur; 
   
    return max; 
        
    }
};