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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        for (int i = 1; i < k; i++) {
            temp = temp->next;
        }
        

        ListNode* slow = head;
        ListNode* fast = temp;
        
        while (fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* end = slow;
        swap(temp->val, end->val);
        return head;
    }
};