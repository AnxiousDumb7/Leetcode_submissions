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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> v;
        ListNode* temp = head;
        while(temp != nullptr){
            v.push_back(temp->val);
            temp = temp->next;
        }

        int n = v.size();
        int l = 0;
        int r = k-1;
        while(r < n){
         
            if(r-l+1 == k){
                reverse(v.begin()+l, v.begin()+ r+1);
            }
            
            l += k;
            r += k;
            
        }
        ListNode* ptr = head;
        int i = 0;
        while(ptr != nullptr){ // while(i < v.size())
            ptr->val = v[i];
            ptr = ptr->next;
            i++;
        }
        return head;
    }
};