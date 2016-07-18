class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int curMax = 0;
        int n_jumps = 0;
        int i=0;
        while(curMax<n-1)
        {
            int lastMax = curMax;
            for(;i<=lastMax;i++)
                curMax = max(curMax,i+nums[i]);
            n_jumps++;
            if(lastMax==curMax) return -1;
        }
        return n_jumps;
    }
};