/*
6. Given a singly linked list and a key, count the number of occurrences of the given key
in the linked list. For example, if the given linked list is 1->2->1->2->1->3->1 and the
given key is 1, then the output should be 4.
*/
solved on GFG
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
              node *head=NULL;
     public:
             void insertAtend(int v)
             {
                node *temp=new node (v);
                if(head==NULL)
                {
                     head=temp;
                }
                else
                {
                    node *x=head;
                    while(x->next!=NULL)
                   {
                       x=x->next;  
                   }
                   x->next=temp;
                }
             }
             void insertATbegin(int v)
             {
                 
                 node* temp=new node(v);
                 if(head==NULL)
                 {
                    head=temp;
                 }
                 else
                 {
                      temp->next=head;
                      head=temp;
                 }
                 
             }
             void insertAtmiddle(int p,int v)
             {
                node* x=head;
                node *temp=new node(v);
                if(p==1)
                {
                    temp->next=head;
                    head=temp;
                }
                else
                {
                    while(p>1)
                    {
                        if(x==NULL)
                        {
                            cout<<"Position does not found"<<endl;
                            return;
                        }
                        else
                        {
                           x=x->next;
                           p--;
                        }
                    }
                    if(x->next==NULL)
                    {
                       x->next=temp; 
                    }
                    else
                    {
                        temp->next=x->next;
                        x->next=temp;
                    }
                }
             }
             void deleteAtbegin()
             {
                node* temp=head;
                if(head==NULL)
                {
                    cout<<"LinkedList is Already empty"<<endl;
                }
                else
                {
                    head=head->next;
                    delete temp;
                }
             }
             void deleteAtend()
             {
                node* temp=head;
                node* prev=NULL;
                if(head==NULL)
                {
                    cout<<"Linked List is Already empty"<<endl;
                    return;
                }
                else
                {
                    while(temp->next!=NULL)
                    {
                        prev=temp;
                        temp=temp->next;
                    }
                    prev->next=NULL;
                    delete temp;

                }
             }
             void deletedAtmiddle(int index)
             {
                  node* prev=NULL;
                  node* temp=head;
                  if(head==NULL)  
                  {
                       cout<<"Linked List is Already empty"<<endl;
                  }
                  else if(index==1)
                  {
                       head=head->next;
                       delete temp;
                  }
                  else
                  {
                        while(index>1)   
                        {
                             
                             if(temp==NULL)
                             {
                                cout<<"Position does nit found"<<endl;
                                return;
                             }
                             else
                             {
                                 prev=temp;
                                 temp=temp->next;
                                 index--;
                             }
                        }
                        if(temp->next==NULL)
                        {
                             prev->next=NULL;
                             delete temp;
                        }
                        else
                        {
                              prev->next=temp->next;
                              delete temp;
                        }
                  }
                        
             }
             void display()
             {
                  node *temp=head;
                  while(temp!=NULL)
                  {
                      cout<<temp->data<<"=>";
                      temp=temp->next;
                  }
                  cout<<endl;
             }
             int count(struct node* head, int search_for)
    {
    // //add your code here
    //    node* temp=head;
    //    int count=0;
    //     while(temp!=NULL)
    //     {
    //         if(search_for==temp->data)
    //         {
    //             count++;
    //         }
    //         temp=temp->next;
    //     }
    //     return count;
    // }
             void occurrences()
             {
                   node* temp=head;
                   map<int,int> m;
                   while(temp->next!=NULL)
                   {
                         m[temp->data]++;
                         temp=temp->next;
                   }
                   map<int,int>::iterator itr;
                   for(itr=m.begin();itr!=m.end();itr++)
                   {
                        cout<<itr->first<<"=>"<<itr->second<<endl;
                   }
             }
             
             
};
int main()
{
      linkedList obj;
      obj.insertAtend(1);
      obj.insertAtend(2);
      obj.insertAtend(3);
      obj.insertATbegin(4);
      obj.insertATbegin(33);
      obj.insertAtend(3);
      obj.insertATbegin(1);
      obj.insertATbegin(1);
      obj.insertATbegin(5);
      obj.insertAtend(5);
      obj.insertAtmiddle(3,33);
      obj.insertATbegin(5);
      obj.insertAtmiddle(1,8);
      obj.insertAtmiddle(3,33);
      obj.insertAtmiddle(7,77);
      obj.insertAtmiddle(7,88);
      obj.display();
      obj.deleteAtbegin();
      obj.deleteAtend();
      obj.display();
      obj.deletedAtmiddle(3);
      obj.deletedAtmiddle(1);
      obj.deletedAtmiddle(12);
      obj.display();
     // obj.occurrences();
      return 0;
}