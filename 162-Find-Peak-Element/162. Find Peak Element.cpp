
class Solution {
public:

	int findPeakElement(const vector<int> &num) {

		int n = num.size();
		int low = 0;
		int high = n - 1;

		int mid = 0, v1, v2;

		while (low < high) {

			// Find the index of middle element
			mid = low + (high - low) / 2;

			// Compare middle element with its neighbours (if neighbours exist)
			if ((mid == 0 || num[mid] > num[mid - 1]) &&
				(mid == n - 1 || num[mid] > num[mid + 1])) {
				return mid;
			}

			// If middle element is not peak and its left neighbor is greater than it
			// then left half must have a peak element
			if (mid >0 && num[mid - 1] > num[mid]) {
				high = mid - 1;
				// If middle element is not peak and its right neighbor is greater than it
				// then right half must have a peak element
			}
			else {
				low = mid + 1;
			}

		}

		return low;
	}
};