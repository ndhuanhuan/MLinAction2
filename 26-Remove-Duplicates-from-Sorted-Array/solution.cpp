class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n=0) return 0;
        int length = 1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[i-1])
            {
                
                length++;
            }
            
        }
        return length;
    }
};