#ifndef REMOVELINKEDLISTELEMENTS_H
#define REMOVELINKEDLISTELEMENTS_H
#include <iostream>
/*
*   @Definition for singly-linked list.
*/
struct ListNode {
    int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val);
};
#endif