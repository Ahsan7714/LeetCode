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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Handle cases where one of the lists is empty
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;

        // Initialize the head of the merged list
        ListNode* mergedHead = nullptr;
        if (list1->val < list2->val) {
            mergedHead = list1;
            list1 = list1->next;
        } else {
            mergedHead = list2;
            list2 = list2->next;
        }

        // Merge the lists
        ListNode* current = mergedHead;
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                current->next = list1;
                list1 = list1->next;
            } else {
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }

        // Attach the remaining part of the list
        if (list1 != nullptr) {
            current->next = list1;
        } else {
            current->next = list2;
        }

        return mergedHead;
    }
};
