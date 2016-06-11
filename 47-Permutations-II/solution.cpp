class Solution {
public:
	vector<vector<int>> permuteUnique(vector<int>& nums) {
		int n = nums.size();
		vector<vector<int>> result;
		vector<int> path;
		vector<bool> used(nums.size(), false);
		dfs(nums,used, path, result);
	}

	void dfs(const vector<int>& nums, vector<bool> &used, vector<int> &path, vector<vector<int> > &result)
	{
		if (path.size() == nums.size()) 
		{
			result.push_back(path);
			return;
		}
		for (int i = 0; i<nums.size(); i++) {
			if (used[i]) continue;
			if (i>0 && nums[i] == nums[i - 1] && !used[i - 1]) continue;
			used[i] = true;
			path.push_back(nums[i]);
			dfs(nums, used, path, result);
			path.pop_back();
			used[i] = false;
		}
	
	}

};