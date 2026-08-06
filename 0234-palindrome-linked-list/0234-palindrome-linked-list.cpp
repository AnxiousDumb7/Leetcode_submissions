/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        // Find middle and reverse from middle and compare

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        // slow is at middle now
        // swap the half 
        ListNode* previous = nullptr;
        while(slow != nullptr){
            ListNode* next = slow->next;
            slow->next = previous;
            previous = slow;
            slow = next;
        }
        // compare
        while(previous != nullptr){
            if (head->val != previous->val){
                return false;
            }
            head = head->next;
            previous = previous->next;
        }
        return true;
    }
};