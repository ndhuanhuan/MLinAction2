class Solution {
public:
    int maxProfit(vector<int>& prices) {
            if(prices.size()==0) return 0;
            int minValue = prices[0],ret = 0;
            for(int i=0;i<prices.size();i++)
            {
                if(prices[i]<minValue)
                {
                    minValue = prices[i];
                }
                else
                    ret = max(prices[i]-minValue,ret);
            }
            return ret;
    }
};
