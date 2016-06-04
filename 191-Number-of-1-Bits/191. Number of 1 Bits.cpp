class Solution {
public:
	int hammingWeight(uint32_t n) {
		int count = 0;
		for (; n > 0; n /=2) 
		{
			if (n & 0x1)
				count++;
		}
		return count;
	}
};