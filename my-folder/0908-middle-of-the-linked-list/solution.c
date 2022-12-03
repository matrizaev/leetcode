/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode *middle = head;
    while (head != NULL && head->next != NULL){
        head = head->next->next;;
        middle = middle->next;
    }
    return middle;
}
