class Solution {
public:
    vector<pair<int, int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int,int>> res;
		priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> q;
		for(int i=0 ; i<min((int)num1.size,k); ++i )
		{
			for(int j;j < min((int)num2.size,k);++j)
			{
				if(q.size()<k)
				{
					q.push({num1[i],num2[j]});
				}
				else if (nums1[i] + nums2[j] < q.top().first + q.top().second) 
				{
                    q.push({nums1[i], nums2[j]}); q.pop();
				}
			}
		}
		while(!q.empty())
		{
			res.push_back(q.top());
			q.pop();
		}
		return res;
    }
	
	struct cmp
	{
		bool operator() (pair<int> &a, pair<int> &b)
		{
			return a.first+a.second<b.first+b.second;
		}
	}
};