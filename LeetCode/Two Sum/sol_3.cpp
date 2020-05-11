class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) 
	{
        
        unordered_map<int, int> compSum;
        unordered_map<int, int>::iterator it;
        
        for(int i = 0; i < nums.size(); i++)
		{
            it = compSum.find(target-nums[i]);
            if(it == compSum.end())
			{
                compSum[nums[i]] = i;
            }else{
                return {it->second, i};
            }
        }
        
        return {};
    }
};