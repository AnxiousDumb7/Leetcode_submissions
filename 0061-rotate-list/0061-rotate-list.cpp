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
    ListNode* rotateRight(ListNode* head, int k) {
       // int cnt = 0;
//
       // if(head == nullptr || head->next == nullptr )
       //     return head;
//
       // while(cnt < k){
       //     ListNode* temp = head;
       //     while(temp->next->next != nullptr){
       //         temp = temp->next;
       //     }
       //     temp->next->next = head;
       //     head = temp->next;
       //     temp->next = nullptr;
       //     cnt++;
       // }
       // return head;

       ListNode* temp = head;
       int n = 1;

        if(temp == nullptr || temp->next == nullptr){
            return head;
        }
        while(temp->next != nullptr){
            temp = temp->next;
            n++;
        }
        temp->next = head;
        k = k % n;  // new k 

        ListNode* ptr = head;
        int jumps = n - k; 
        for(int i = 1; i < jumps; i++){
            ptr = ptr->next;
        }
        ListNode* newnode = ptr->next;
        ptr->next = nullptr;
        return newnode;
    }
};