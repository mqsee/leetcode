#include "solution.h"
#include<iostream>
using namespace std;

int main()
{
  int n1,n2,i;
  int val;
  while(cin>>n1>>n2)
  {
    ListNode *l1=NULL;
    ListNode *l2=NULL;
    ListNode *p=NULL;
    ListNode *l=NULL;
    for(i=0;i<n1+n2;i++)
    {
      cin>>val;
      ListNode *pnode;
      pnode = new ListNode(val);
      //link the new node to the tail of l1 and l2
      if(i<n1)
      {
        if(l1==NULL)
        {
          l1 = pnode;
          p = l1;
        }
        else
        {
          p->next = pnode;
          p = p->next;
        }
      }
      else
      {
        if(l2==NULL)
        {
          l2 = pnode;
          p = l2;
        }
        else
        {
          p->next = pnode;
          p = p->next;
        }
      }
    }

    // cout<<"get Linklist* l1"<<endl;
    // while(l1!=NULL)
    // {
    //   cout<<l1->val<<" ";
    //   l1 = l1->next;
    // }
    // cout<<endl;
    // cout<<"get Linklist* l2"<<endl;
    // while(l2!=NULL)
    // {
    //   cout<<l2->val<<" ";
    //   l2 = l2->next;
    // }
    // cout<<endl;

    Solution s;
    l = s.addTwoNumbers(l1,l2);
    cout<<"get the sum: "<<endl;
    while(l!=NULL)
    {
      cout<<l->val<<" ";
      l = l->next;
    }
  }
  return 0;
}

/*
3 3
2 4 3
5 6 4
*/
