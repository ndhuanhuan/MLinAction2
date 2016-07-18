class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        vector<int> path;
        dfs(nums,path,result,target,0);
        return result;
    }
    
    void dfs(vector<int>& nums, vector<int>& path, vector<vector<int>>& result, int gap, int start)
    {
        if(gap==0)
        {
            result.push_back(path);
            return;
        }
        
        int prev=-1;
        for(int i=start; i<nums.size(); i++)
        {
            if(prev==nums[i]) continue;
            if(gap<nums[i]) return;
            prev = nums[i];
            path.push_back(nums[i]);
            dfs(nums,path,result,target-nums[i],i+1);
            path.pop_back();
        }
    }
};