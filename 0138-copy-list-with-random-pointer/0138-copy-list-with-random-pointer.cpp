/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == nullptr)
            return nullptr;
        Node* temp = head;
        while(temp != nullptr){
            Node* newnode = new Node(temp->val);
            newnode->next = temp->next;
            temp->next = newnode;
            temp = temp->next->next;
        }
        
        // Handle random pointers 
        Node* temp2 = head;
        while(temp2 != nullptr){
            if(temp2->random == nullptr){
                temp2->next->random = nullptr;
            }
            else{
                temp2->next->random = temp2->random->next;     
            }
            temp2 = temp2->next->next;
        }

        Node* temp3 = head;
        Node* Head = head->next;

        while(temp3 != nullptr){
            Node* ptr = temp3->next; //first newnode
            temp3->next = ptr->next;

            if(ptr->next != nullptr){
                ptr->next = ptr->next->next;
            }
            temp3 = temp3->next;
        }
        return Head;
    }
};