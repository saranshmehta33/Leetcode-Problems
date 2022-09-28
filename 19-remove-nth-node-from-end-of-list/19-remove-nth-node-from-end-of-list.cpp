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
 ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n==1 && head->next==NULL){
            return NULL;
        }
        ListNode* left=head;
        ListNode* right=head;
        int count=1;
        while(right!=NULL){
                right=right->next;
            if(count>n && right!=NULL){
                left=left->next;
            }
            count++;
        }
        if(count-1<=n){
            head=head->next;
        }
        else{
            left->next=left->next->next;
        }
        return head;
    }
};