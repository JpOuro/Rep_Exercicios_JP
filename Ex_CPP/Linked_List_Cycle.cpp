/* https://leetcode.com/problems/linked-list-cycle/submissions/1812562398/ */

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
    bool hasCycle(ListNode *head) {
        ListNode* A = head;
        ListNode* B = head;
        while (B && B -> next) {
            A = A -> next;
            B = B -> next -> next;
            if (A == B) {
                return true;
            }
        }
        return false;
    }
};