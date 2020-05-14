class Solution {
public:
    int trap(vector<int>& height) {
        int res = 0;
        int left,right;
        if(height.size()==0)
            return res;
        for(int i = 1;i<height.size()-1;i++) {
            left = height[i];
            for(int j=0;j<i;j++)
                left = max(left,height[j]);
            right = height[i];
            for(int j=i+1;j<height.size();j++)
                right = max(right,height[j]);
            res = res + min(left,right) - height[i];
            
        }
        return res;
    }
};