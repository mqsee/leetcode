/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<iostream>
using namespace std;

struct ListNode {
   int val;
   ListNode *next;
   ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *pnode=NULL;
        ListNode *p=NULL;
        ListNode *head=NULL;
        int flag = 0,add;
        while(l1!=NULL||l2!=NULL||flag==1)
        {
          add=flag;
          if(l1!=NULL)
          {
            add += l1->val;
            l1 = l1->next;
          }
          if(l2!=NULL)
          {
            add += l2->val;
            l2 = l2->next;
          }
          //the current pos bigger than 9
          if(add>=10)
          {
            add-=10;
            flag=1;
          }
          else
            flag=0;

          //link the new node to the tail
          pnode = new ListNode(add);
          if(head==NULL)
          {
            head = pnode;
            p = pnode;
          }
          else
          {
            p->next = pnode;
            p = p->next;
          }
        }
        return head;
    }
};
