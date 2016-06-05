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
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		int length1 = 0;
		int length2 = 0;
		ListNode* a1 = headA;
		ListNode* a2 = headB;

		while (a1) 
		{
			length1++;
			a1 = a1->next;
		}
		while (a2) 
		{
			length2++;
			a2 = a2->next;
		}

		while (length1 > 0 && length2 > 0) 
		{
			if (length1>length2) 
			{
				length1--;
				a1 = a1->next;
			}
			if (length2 > length1)
			{
				length2--;
				a2 = a2->next;
			}
			if(length1 == length2)
			{
				if (a1 == a2) 
				{
					return a1;
				}
				else 
				{
					a1 = a1->next;
					a2 = a2->next;
					length1--;
					length2--;
				}
			}
		}

		return NULL;

	}
};