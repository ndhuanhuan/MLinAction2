class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if(n<=0) return 0;
        int maxSum = A[0], curSum = A[0];
        for(int i=1; i<n; i++) {
            curSum =  curSum<=0 ? A[i] : A[i]+curSum;
            maxSum = max(maxSum,curSum);
        }
        return maxSum;
    }
};


