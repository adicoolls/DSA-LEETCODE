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
    ListNode *reverse(ListNode *head){
        ListNode *prev = nullptr;
        ListNode *curr = head;
        while(curr != nullptr){
            ListNode *front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        
           ListNode *slow = head;
           ListNode *fast = head;
           while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
           }
           slow = reverse(slow);
           ListNode * temp = head;
           while(slow != nullptr){
            if(slow->val != temp->val){
                return false;
            }
            temp = temp->next;
            slow = slow->next;
           }
           return true;
    }
};