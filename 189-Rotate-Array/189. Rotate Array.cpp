class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		int n = nums.size();
		if ((k <= 0)||(n==0)) return;
		k %=n;
		reverse2(nums, 0, n - k - 1);
		reverse2(nums, n - k, n - 1);
		reverse2(nums, 0, n - 1);
	}

	void reverse2(vector<int>& nums, int start, int end) 
	{
		int temp;
		while (start < end) 
		{
			int temp = nums[start];
			nums[start] = nums[end];
			nums[end] = temp;
			start++;
			end--;
		}

	}
};