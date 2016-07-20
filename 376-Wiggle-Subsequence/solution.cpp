class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        const int n = nums.size();
        if(n<=1) return n;
        int i=1;
        int dp[n];
        while(nums[i]==nums[i-1]&&i<n) i++;
        int increase = nums[i]>nums[i-1]? 1:-1;
        int maxLength = INT_MIN;
        increase *=-1;
        //first is increasing
        for(int j=0;j<=i;j++)
        {
            dp[j]=1;
        }
        i++;
        for(;i<n;i++)
        {
            if(increase==1)
            {
                if(nums[i]>nums[i-1])
                {
                     //correct
                    dp[i+1] = dp[i]+1;
                    maxLength = max(maxLength,dp[i+1]);
                    increase =1
                }
                else
                {
                    dp[i+1] = 1;
                    maxLength = max(maxLength,dp[i+1]);
                    increase =0;
                }
            }
            else if(increase==-1)
            {
                if(nums[i]<nums[i-1])
                {
                    //correct
                    dp[i+1] = dp[i]+1;
                    maxLength = max(maxLength,dp[i+1]);
                    increase =1
                } 
                else
                {
                    dp[i+1] = 1;
                    maxLength = max(maxLength,dp[i+1]);
                    increase =0;
                }
            }
            else
            {
                 dp[i+1] = 1;
                 maxLength = max(maxLength,dp[i+1]);
                 if(nums[i]==nums[i-1])
                 {
                     increase=0;
                 }
                 else
                 {
                     increase =nums[i]>nums[i-1]? 1:-1;
                 }
            }
        }
        return dp[n];
    }
};