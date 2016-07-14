// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        if(n<=0) return 0;
        if(n==1) return 1;
        int left=0, right=n;
        
        while(result!=0)
        {   
            int mid = left + (right - left) / 2;
            int result = guess(mid);
            if(result==-1)
            {
                right=(left+right)/2+1;
                mid =(left+right)/2;
            }
            else if(result==1)
            {
               left=(left+right)/2-1;
                mid =(left+right)/2;
            }
        }
        return cur; 
    }
};