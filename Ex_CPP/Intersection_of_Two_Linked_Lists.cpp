/* https://leetcode.com/problems/intersection-of-two-linked-lists/submissions/1813431585/ */

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
        if (headA == nullptr || headB == nullptr) {
            return headA;
        }
        ListNode* A = headA;
        ListNode* B = headB;
        int c = 3;
        while (A != B) {
            if (A == nullptr) {
                A = headB;
            }
            else {
                A = A -> next;
            }
            if (B == nullptr) {
                B = headA;
            }
            else {
                B = B -> next;
            }
        }
        return A;
    }
};