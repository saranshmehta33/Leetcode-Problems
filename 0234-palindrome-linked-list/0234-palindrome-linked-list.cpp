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
private:
    ListNode* getMid(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        
        while(curr != NULL)
        {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        
        //Step 1 -> find middle
        ListNode* middle = getMid(head);
        
        //Step 2 -> reverse list after middle
        ListNode* temp = middle->next;
        middle->next = reverse(temp);
        
        //Step 3 -> Compare both halves
        ListNode* head1 = head;
        ListNode* head2 = middle->next;
        
        while(head2 != NULL)
        {
            if(head1->val != head2->val)
            {
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        
        //Step 4 -> repeat Step 2
        temp = middle->next;
        middle->next = reverse(temp);
        
        return true;
    }
};