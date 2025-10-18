/* https://leetcode.com/problems/remove-duplicates-from-sorted-list/submissions/1804501176/ */

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * temp, * ans;
        temp = new ListNode();
        ans = temp;
        while (head) {
            while ((head -> next) && (head -> val == (head -> next) -> val)) {
                head = head -> next;
            }
            temp -> next = head;
            temp = temp -> next;
            head = head -> next;
        }
        ans = ans -> next;
        return ans;
    }
};