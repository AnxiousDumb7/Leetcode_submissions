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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            
            if(fast == slow){
                ListNode* ptr = head;
                while(slow != ptr){
                    slow = slow->next;
                    ptr = ptr->next;
                }
                // while slow == ptr then
                return ptr;
            }
        }
        return nullptr;
    }
};