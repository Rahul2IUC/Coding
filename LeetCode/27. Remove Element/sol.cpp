class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=nums.size()-1,count=0,temp=0;
         if(j==-1)
             return 0;
        for(int i=0;i<=j;i++) {
            if(nums[i]==val){
                count++;
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                j--;
                i--;
            }
            
        }
        return nums.size()-count;
    }
};