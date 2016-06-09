class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left=0, right=n-1;
        int i=0;
        while(i<=right)
        {
            if(nums[i]==0)
                swap(nums[i++],A[left++]);
            else if(nums[i]==1)
                i++;
            else if(nums[i])
            swap(nums[i],nums[right--]);
        }
    }
};