class Solution {
public:
    int mySqrt(int x) {
         if (x == 0 || x == 1) 
    return x; 
         long int i = 1,sq = 1; 
    while (sq <= x) 
    { 
      i++; 
      sq = i * i; 
    } 
    return i - 1; 
    }
};