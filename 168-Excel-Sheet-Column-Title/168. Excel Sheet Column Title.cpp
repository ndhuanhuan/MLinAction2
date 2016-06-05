class Solution {
public:
	string convertToTitle(int n) {
		string ret;
		while (n>0) {
			char ch = 'A' + (n - 1) % 26;
			ret.insert(ret.begin(), ch);
			n -= (n - 1) % 26;
			n /= 26;
		}
		return ret;
	}
};