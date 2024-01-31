/*
10. Given a singly linked list, find the middle of the linked list. For example, if the given
linked list is 1->2->3->4->5 then the output should be 3.
If there are even nodes, then there would be two middle nodes, we need to print the
second middle element. For example, if the given linked list is 1->2->3->4->5->6 then
the output should be 4.
*/

#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
           int data;
           node* next;
    public:
          node(int n)
          {
              data=n;
              next=NULL;
          }
};
class linkedList
{
    private:
             node* head=NULL;
    public:
            void insert(int n ,int v)
            {
                node* temp=head;
                node* x=new node(v);
                 if(head==NULL)
                 {
                     head=x;
                 }
                 else if(n==1)
                 {
                     x->next=head;
                     head=x;  
                 }
                 else
                 {
                      while(n>1)
                      {
                          if(temp->next!=NULL)
                          {
                            temp=temp->next;
                          }
                          else
                          {
                              cout<<"Position does not exist"<<endl;
                              return;
                          }
                          n--;
                      }
                      if(temp->next==NULL)
                      {
                          temp->next=x;
                      }
                      else
                      {
                          
                          x->next=temp->next;
                          temp->next=x;

                      }

                 }
            }
            int midelement()
            {
                  node* slow=head;
                  node* fast=head;
                  while(slow->next!=NULL)
                  {
                        if(fast->next==NULL || fast->next->next==NULL)
                       {
                            break;
                       }
                       else if(slow->next!=NULL && fast->next->next!=NULL)
                       {
                            slow=slow->next;
                            fast=fast->next->next;
                       }
                       else
                       {
                           break;
                       }
                  }
                  return slow->data;
                  
            }
            void display()
            {
                node* temp=head;
                while(temp!=NULL)
                {
                    cout<<temp->data<<"=>";
                    temp=temp->next;
                }
                cout<<endl;
            }
};
int main()
{
    linkedList obj;
    obj.insert(1,5);
    obj.insert(1,4);
    obj.insert(2,6);
    obj.insert(3,8);
    obj.insert(2,22);
    obj.insert(5,55);
    obj.insert(5,33);
  //  obj.insert(1,11);
    obj.display();
    cout<<"Mid Element : "<<obj.midelement();
    return 0;
}
