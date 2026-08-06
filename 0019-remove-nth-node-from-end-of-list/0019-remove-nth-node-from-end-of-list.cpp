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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ptr = head;
        int cnt = 0;
        while(ptr != nullptr){
            cnt++;
            ptr = ptr->next;
        }
        cnt -= n;
        
        if(cnt == 0){
            ListNode* todelete = head;
            head = head->next;
            delete todelete;
            return head;
        }
        ListNode* temp = head;
        int newcnt = 1;
        while(newcnt < cnt){
            temp = temp->next;
            newcnt++;
        }
        ListNode* todelete = temp->next;
        temp->next = temp->next->next;
        delete todelete;
        return head;

    }
};