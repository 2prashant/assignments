/*
7. Given a Linked List and a number N, write a function that returns the value at the Nth
node from the end of the Linked List.
Examples:
Input: 1 -> 2 -> 3 -> 4, N = 3
Output: 2
Input: 35 -> 15 -> 4 -> 20, N = 4
Output: 35

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
           void insert(int v)
           {
                node* temp=head;
                node* x=new node(v);
                if(head==NULL)
                {
                    head=x;
                }
                else
                {
                    while(temp->next!=NULL)
                    {
                        temp=temp->next;
                    }
                    temp->next=x;
                }

           }
           void  reverse()
           {
               node* prev=NULL;
               node* curr=head;
               node* Next=NULL;
               while(curr!=NULL)
               {  
                   Next=curr->next;
                   curr->next=prev;
                   prev=curr;
                   curr=Next;
               }
              head=prev;

           }
           void endNthvalue(int n)
           {  
                reverse();
                node* temp=head;
                if(head==NULL)
                {
                    cout<<"Linked list is empty"<<endl;
                }
                else
                {
                    while(n>1)
                    {
                        temp=temp->next;
                        n--;
                    }
                }
                cout<<"\n"<<temp->data;

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
    obj.insert(35);
    obj.insert(15);
    obj.insert(4);
    obj.insert(20);
    obj.display();
  //  obj.reverse();
  //  obj.display();
    obj.endNthvalue(4);

   return 0;
}