class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l=1;
        long long r=num/2+1;
        if(num==0||num==1) return true;
        while(l<=r)
        {
            long long m = l+(r-l)/2;
            long long temp = m*m;
            if(temp==num)
            {
                return true;
            }
            else if(temp>num)
            {
                r=m-1;                
            }
            else
            {
                l=m+1;
            }
        }
        return false;
    }
};