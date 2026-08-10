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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp = new ListNode();
        ListNode* ptr = temp;
        int carry = 0;
        
        while(l1 != nullptr || l2 != nullptr || carry != 0){
            int d = 0;
            if(l1 != nullptr){
                d += l1->val;
                l1 = l1->next;
            }
            if(l2 != nullptr){
                d += l2->val;
                l2 = l2->next;
            }
            
            d += carry;
            carry = d/10;
            ListNode* node = new ListNode(d % 10);
            ptr->next = node;
            ptr = ptr->next;
            
        }
        return temp->next;
    }
};