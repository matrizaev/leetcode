/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if (!head)
        return false;
    struct ListNode *fast = head->next;
    while (fast && fast->next) {
        head = head->next;
        fast = fast->next->next;
        if (head == fast)
            return true;
    }
    return false;
}
