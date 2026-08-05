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
    bool hasCycle(ListNode* head) {
        // have to use fast and slow pointer
        // Noth start at head
        // intuition is left moves forward by 1 and right moves forward by 2
        // and they meet at a point if there is loop

        ListNode* left = head;
        ListNode* right = head;

        while (right != nullptr && right->next != nullptr) {
            left = left->next;
            right = right->next->next;
            if (left == right)
                return true;
        }
        return false;
    }
};