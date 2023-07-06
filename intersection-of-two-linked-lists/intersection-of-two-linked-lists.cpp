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
    int diffrence(ListNode *head1, ListNode *head2){
        int l1 =0 ;
        int l2=0;
        while(head1!=NULL || head2!=NULL){
            if(head1!=NULL){
                ++l1;
                head1= head1->next;
            }
            if(head2!=NULL){
                ++l2;
                head2= head2->next;
            }
        }
        return l1-l2;
    }
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        int diff = diffrence(head1,head2);
        if(diff<0)
            while(diff++ !=0)   head2 = head2->next;
        else while(diff-- !=0)   head1 = head1->next;
        while(head1!=NULL){
            if(head1==head2) return head1;
            head1 = head1->next;
            head2 = head2->next;
        }
        return head1;
    }
};