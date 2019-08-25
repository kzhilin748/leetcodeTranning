#include "203_RemoveLinkedListElements.h"

ListNode* Solution::removeElements(ListNode* head, int val) {
        ListNode* ptr=head;
        ListNode* tmp=NULL;        
        while(ptr){
            if(ptr->val==val&&ptr==head){
                ptr=ptr->next;
                head=NULL;
                delete head;
                head=ptr;
                
            }
            else if(ptr->next&&((ptr->next)->val)==val){
                tmp=ptr->next;
                ptr->next=tmp->next;
                tmp=NULL;
                delete tmp;
            }
            else
                ptr=ptr->next;
            
            
        }
        return head;
}