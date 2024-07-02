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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) return nullptr;

        int lenA = getListLength(headA);
        int lenB = getListLength(headB);

        // Align the start of both lists
        while (lenA > lenB) {
            headA = headA->next;
            lenA--;
        }

        while (lenB > lenA) {
            headB = headB->next;
            lenB--;
        }

        // Move both heads until they meet
        while (headA != headB) {
            headA = headA->next;
            headB = headB->next;
        }

        return headA;
    }

private:
    int getListLength(ListNode *head) {
        int length = 0;
        while (head != nullptr) {
            length++;
            head = head->next;
        }
        return length;
    }
};
