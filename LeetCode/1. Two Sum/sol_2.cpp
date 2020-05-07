bool mycompare(pair<int, int>x, pair<int, int> y){
    return x.first < y.first;
}

class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<pair<int, int>> x(nums.size());
        
        for(int i = 0; i < nums.size(); i++){
            x[i] = make_pair(nums[i], i);
        }
        
        sort(x.begin(), x.end(), mycompare);
        
        int l = 0, r = x.size()-1, sum;
        
        while(l <= r){
            
            sum = x[l].first + x[r].first;
            // cout << num[0] << " : " << num
            
            if(sum == target){
                return {x[l].second, x[r].second};
            }else if(sum < target){
                l++;
            }else{
                r--;
            }
            
        }
        
        return {};
    }
};