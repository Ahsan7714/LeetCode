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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        } 
        ListNode*nexthead = reverseList(head->next);
        head->next->next=head;
        head->next=nullptr;
        return nexthead;

    }
};

// ListNode* prev = nullptr;
//         ListNode* current = head;
//         ListNode* forward = nullptr; 
        
//         while (current != nullptr) {
//             forward = current->next; 
//             current->next = prev; 
//             prev = current; 
//             current = forward; 
//         }
        
//         return prev;