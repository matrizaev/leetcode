/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){

	if (l1 == NULL && l2 == NULL)
		return NULL;
	struct ListNode *result = NULL;
	struct ListNode *node = NULL;
	int carry = 0;
	while (l1 != NULL || l2 != NULL || carry > 0){
		if (result == NULL){
			result = calloc(1, sizeof(struct ListNode));
			node = result;
		}   
		else{
			node->next = calloc(1, sizeof(struct ListNode));
			node = node->next;
		}
		node->val = carry;
		if (l1 != NULL){
			node->val += l1->val;
			l1 = l1->next;
		}
		if (l2 != NULL){
			node->val += l2->val;
			l2 = l2->next;
		}
		if (node->val >= 10){
			carry = node->val / 10;
			node->val %= 10;
		}
		else{
			carry = 0;
		}
	}
	return result;
}
