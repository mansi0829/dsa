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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *newl = new ListNode(-1);
        int carry=0;
        while(l1->next!=null && l2->next!=null){
            newl-> val = l1->val + l2->val +carry;
            l1=l1->next;
            l2=l2->next;
            if(newl->val%10!=0){
                carry=newl->val/10;
            }
            newl=newl->next;
        }
        
        
        int i=0, temp=0;
        // while(i!=0){
        //     temp->val=newl->val;
        // }
        return newl;
    }
};
