/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode *head, int n){
    struct ListNode *nth = head, *result = head;
    while (head != NULL && n > 0){
        n--;
        head = head->next;
    }
    while(head != NULL && head->next != NULL){
        nth = nth->next;
        head = head->next;
    }
    if (nth == result && head == NULL)
        result = result->next;
    else
        if (nth->next != NULL)
            nth->next = nth->next->next;
    return result;
}
