// 2. Given a sorted doubly linked list of positive distinct elements, the task is to find pairs
// in a doubly-linked list whose sum is equal to given value x, without using any extra
// space?
// Example:

#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
           int data;
           node* next;
           node* prev;
    public:
           node(int value)
           {
                data=value;
                prev=NULL;
                next=NULL;
           }
};
class LinkedList
{
    private: 
             node* head=NULL;
    public:
            void insert(int n)
            {
               node* temp=head;
               node* x=new node(n);
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
                     x->prev=temp;
                     temp->next=x;
               }
            }
            bool search(int v)
            {
                node* temp=head;
                if(head==NULL)
                {
                    cout<<"Double Linked List is empty"<<endl;
                }
                else
                {
                    while(temp->next!=NULL)
                    {
                        if(temp->data==v)
                        {
                            return true;
                        }
                        else
                        {
                            temp=temp->next;
                        }
                    }
                }
                return false;
            }
            void pairLinkedlist(int k)
            {
                vector<pair<int,int>> v;
                 node* temp=head;
                 while(temp->next!=NULL)
                 {
                     int x=k-temp->data;
                      if(search(x) && x>=temp->data)
                      {
                           v.push_back(make_pair(x,temp->data));
                      }
                      temp=temp->next;
                 }
                 vector<pair<int,int>>::iterator itr;
                 for(itr=v.begin();itr!=v.end();itr++)
                 {
                    cout<<"("<<itr->first<<","<<itr->second<<")"<<" ";
                 }

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
    LinkedList obj;
    obj.insert(1);
    obj.insert(2);
     obj.insert(4);
     obj.insert(5);
    obj.insert(6);
    obj.insert(8);
    obj.insert(9);
    obj.display();
    obj.pairLinkedlist(7);
    return 0;

}

