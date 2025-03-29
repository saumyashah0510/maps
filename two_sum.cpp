class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            
            unordered_map<int,int> m; // stores value and index
    
            for(int i=0;i<nums.size();i++)
            {
                int diff = target - nums[i];
    
                // if diff is found it will give uss key of diff 
                // and if not found it will give us last element iterator
                if(m.find(diff) != m.end())
                {
                    return {m[diff],i};
                }
    
                m[nums[i]] = i;
    
            }
            return{};
    
        }
    };