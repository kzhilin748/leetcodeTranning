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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ret=new ListNode(((l1?l1->val : 0)+(l2?l2->val : 0))%10);
        ListNode **ptr=&(ret->next);
        int carry=((l1?l1->val : 0)+(l2?l2->val : 0))/10,sum=0;
        l1=l1->next;
        l2=l2->next;
        while(l1||l2||carry>0){
            sum=(l1?l1->val : 0)+(l2?l2->val : 0)+carry;
            carry=sum/10;
            *ptr=new ListNode(sum%10);
            ptr=&((*ptr)->next);
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
        }
        return ret;
    }
};