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
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode dummy(-1);
		ListNode *p = &dummy;
		int carry = 0;
		ListNode *p1 = l1, *p2 = l2;
		while (p1!=nullptr || p2!=nullptr) 
		{
			int tempVal = l1->val + l2->val+carry;
			if (tempVal >= 10) 
			{
				carry = 1;
				tempVal %= 10;
			}
			else 
			{
				carry = 0;
			}
			ListNode* tempNode = new ListNode(tempVal);
			p->next = tempNode;
			p1 = p1->next;
			p2 = p2->next;
			p = p->next;
		}
		return dummy.next;
	}
};