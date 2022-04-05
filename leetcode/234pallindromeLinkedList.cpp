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
    ListNode *reverse(ListNode *root){
        ListNode *next, *prev, *current;
        next=NULL;
        current=root;
        prev=NULL;
        while(current!=NULL ){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *next, *fast, *slow;
        next=NULL;
        slow=fast=head;
        
        while(fast->next->next!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        } 
        
        slow->next=reverse(slow->next);
        slow=slow->next;
        
        while(slow!=NULL){
            if(head->val!=slow->val){
                return false;
            }
            head=head->next;
            slow=slow->next;
        }
        return true;
    }
};