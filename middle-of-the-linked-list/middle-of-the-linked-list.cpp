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
    ListNode* middle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast  = fast->next->next;
        }
        return slow;
    }
    ListNode* middleNode(ListNode* head) {
    //     ListNode *slow=head,*fast=head;
    // while(fast!=NULL&&fast->next!=NULL){
    // slow=slow->next;
    // fast=fast->next->next;
    // }
        ListNode* mid = middle(head);
        return mid;
    }
};