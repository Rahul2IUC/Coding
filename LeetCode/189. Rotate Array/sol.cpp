class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
       /* int n=k%nums.size();
        while(n!=0) {
        int x=nums.size()-1;
        int temp=nums[x];
            for(int i=x;i>0;i--) {
                nums[i]=nums[i-1];   
            }
            nums[0]= temp;
            n--;
        }*/
    int n=k%nums.size();
    int c[nums.size()];
    for(int i=0;i<nums.size();i++){
        c[(i+n)%nums.size()]=nums[i];
        
    }
    for(int i=0;i<nums.size();i++){
        nums[i]=c[i];
    }
       // cout<<nums[0];

}     
};