/*
9. In a singly linked list of characters, write a function that returns true if the given list is
a palindrome, else false.
*/
#include<bits/stdc++.h>
using namespace std;
class node
{
       public:
             int data;
             node* prev;
             node* next;
       public:
             node(int v)
             {
                data=v;
                next=NULL;
                prev=NULL;
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
                bool palindromelist()
                {
                    node* temp=head;
                    stack<int> s;
                    if(head==NULL)
                    {
                        cout<<"Linked list is empty"<<endl;
                        return false;
                    }
                    else if(temp->next==NULL)
                    {
                        return true;
                    }
                    else
                    {
                       while(temp!=NULL)
                       {
                        
                         s.push(temp->data);
                         temp=temp->next;
                       }
                       temp=head;
                      while(temp!=NULL)
                      {
                        if(temp->data==s.top())
                        {
                            temp=temp->next;
                            s.pop();
                        }
                        else
                        {
                            return false;
                        }
                      }
                      return true;
                    }
                }
                void dispaly()
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
    obj.insert(4);
    obj.insert(1);
    obj.insert(2);
    obj.insert(1);
     obj.insert(4);
    // obj.insert(5);
    // obj.insert(6);
    obj.dispaly();
    if(obj.palindromelist())
    {
        cout<<"Linked List is palindrome"<<endl;
    }
    else
    {
        cout<<"LInked List is not Palindrome"<<endl;
    }
    return 0;

}