/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	ListNode *mergeKLists(vector<ListNode *> &lists) {
		if (lists.empty()) return NULL;
		int end = lists.size() - 1;
		while (end>0) {
			int begin = 0;
			while (begin<end) {
				lists[begin] = merge2Lists(lists[begin], lists[end]);
				begin++;
				end--;
			}
		}
		return lists[0];
	}

	ListNode* merge2Lists(ListNode *h1, ListNode *h2) {
		ListNode *dummy = new ListNode(0), *tail = dummy;
		while (h1 && h2) {
			if (h1->val <= h2->val) {
				tail->next = h1;
				h1 = h1->next;
			}
			else {
				tail->next = h2;
				h2 = h2->next;
			}
			tail = tail->next;
		}
		tail->next = h1 ? h1 : h2;
		return dummy->next;
	}
};