class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int i, j;
        vector<int> res;
        for(i=0; i<nums.size(); i++)
        {
            if(nums[i] == target)
            {
                res.push_back(i);
                break;
            }
        }
        for(j=nums.size()-1; j>=0; j--)
        {
            if(nums[j] == target)
            {
                res.push_back(j);
                break;
            }
        }
        if(!res.size())
            return {-1,-1};
        return res;
    }
};
