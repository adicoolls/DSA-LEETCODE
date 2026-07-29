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
    ListNode* reverse(ListNode* head){
        ListNode * prev = nullptr;
        ListNode * curr = head;
        while(curr != nullptr){
            ListNode * front = curr->next;
            curr->next = prev;
            prev=curr;
            curr=front;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     l1 =    reverse(l1);
     l2 =    reverse(l2);

        ListNode * dummy = new ListNode(0);
        ListNode *temp = dummy;
        int carry = 0;
        while(l1 != nullptr || l2 != nullptr || carry){
            int sum = 0 + carry;
            if(l1 != nullptr){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != nullptr){
                sum += l2->val;
                l2= l2->next;
            }
            carry = sum / 10;
            sum = sum % 10;
            ListNode *addNode = new ListNode(sum);
            temp->next = addNode;
            temp = temp->next;
            
        }
        return reverse(dummy->next);
    }
};