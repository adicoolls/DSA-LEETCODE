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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr){
            return nullptr;
        }
        ListNode *dummy = new ListNode(0);
        dummy->next = head;

        ListNode *temp = dummy;
        while(temp->next !=nullptr){
            if(temp->next->val == val){
                ListNode *nodeToDelete = temp->next;
                temp->next = nodeToDelete->next;
                delete nodeToDelete;
            }else{
                temp = temp->next;
            }

        }
        ListNode *ans = dummy->next;
        delete dummy;
        return ans;
    }
};