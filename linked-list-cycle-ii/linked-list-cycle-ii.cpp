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
    ListNode *detectCycle(ListNode *head) {
        if (!head || !head->next || !head->next->next) return NULL;
        ListNode * slow =head;
        ListNode * fast = head;
        while(fast->next!=NULL && fast->next->next !=NULL){
            slow =slow->next;
            fast = fast->next->next;
            if(fast==slow) break;
        }
        if(fast!=slow) return NULL;
        slow = head;
        while(slow!=fast){
            slow=slow->next;
            fast = fast->next;
            //if(slow== fast) return slow;
        }
        return slow;
    }
};