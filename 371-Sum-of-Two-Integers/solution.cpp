class Solution {
public:
    int getSum(int a, int b) {
        int cur = a&b;
        int carry = (a^b)<<1;
        return getSum(cur,carry);
    }
};