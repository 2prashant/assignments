// 3. Given a sorted doubly linked list and a value to insert, write a function to insert the
// value in a sorted way. Initial doubly linked list

#include<iostream>
using namespace std;
class node
{
     public:
             int data;
             node* next;
             node* prev;
     public:
             node(int n)
             {
                data=n;
                next=NULL;
                prev=NULL;
             }

};
class DoublyLinkedList
{
    private:
            node* head=NULL;
    public:
            void insertAtend(int v)
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
                    x->prev=temp;
                    temp->next=x;
                 }
            }
            void insertAtbegin(int v)
            {
                node* temp=head;
                node* x=new node(v);
                if(head==NULL)
                {
                    head=x;
                }
                else
                {
                      head->prev=x;
                      x->next=head;
                      head=x;
                }
            }
            void insertAtmiddle(int n,int v)
            {
                node* temp=head;
                node* x=new node(v);
                if(n==1)
                {
                    head->prev=x;
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
                            cout<<"position does not found"<<endl;
                            return;
                        }
                        n--;
                    }
                    if(temp->next==NULL)
                    {
                        x->prev=temp;
                        temp->next=x;
                    }
                    else
                    {
                        x->prev=temp;
                        x->next=temp->next;
                        temp->next->prev=x;
                        temp->next=x;
                    }
                }

            }
            void deleteAtfirst()
            {
                node* temp=head;
                if(head==NULL)
                {
                    cout<<" double Linked List already empty"<<endl;
                    return;
                }
                else
                {
                    head=head->next;
                    head->prev=NULL;
                    delete temp;
                }
            }
            void deleteAtend()
            {
                node* temp=head;
                if(head==NULL)
                {
                    cout<<"double Linked List already empty"<<endl;
                    return;
                }
                else
                {
                     while(temp->next!=NULL)
                    {
                        temp=temp->next;
                    }
                    temp->prev->next=NULL;
                    delete temp;
                  
                }

            }
            void deleteAtmiddle(int n)
            {
                  node* temp=head;
                  if(head==NULL)
                  {
                    cout<<"Double Linked List is Already empty"<<endl;
                    return;
                  }
                  else if(n==1)
                  {
                      head=head->next;
                      head->prev=NULL;
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
                                cout<<"Position does not found"<<endl;
                                return;
                            }
                            n--;
                        }
                        if(temp->next==NULL)
                        {
                            temp->prev->next=NULL;
                            delete temp;
                        }
                        else
                        {
                              temp->prev->next=temp->next;
                              temp->next->prev=temp->prev;
                        }
                  }
            }
            void insertINsort(int n)
            {
                node* temp=head;
                node* x=new node(n);
                if(head==NULL)
                {
                    head=x;
                }
                else if(temp->data>n)
                {
                    temp->prev=x;
                    x->next=temp;
                    head=x;
                }
                else
                {
                     while(temp->next!=NULL)
                     {
                          if(temp->data>n)
                          {
                               x->prev=temp->prev;
                               x->next=temp;
                               temp->prev->next=x;
                               temp->prev=x;
                               return;
                          }
                          else
                          {
                              temp=temp->next;
                          }
                     }
                     if(temp->data>n)
                     {
                             x->prev=temp->prev;
                               x->next=temp;
                               temp->prev->next=x;
                               temp->prev=x;
                     }
                     else
                     {
                         x->prev=temp;
                         temp->next=x;
                     }
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
    DoublyLinkedList obj;
    // obj.insertAtend(1);
    // obj.insertAtend(2);
    // obj.insertAtend(3);
    // obj.insertAtend(4);
    // obj.insertAtend(5);
    // obj.insertAtbegin(9);
    // obj.insertAtbegin(8);
    // obj.insertAtbegin(7);
    // obj.insertAtmiddle(2,22);
    // obj.insertAtmiddle(5,55);
    // obj.insertAtmiddle(1,11);
    // obj.insertAtmiddle(9,99);
    // obj.insertAtmiddle(88,999);
    // obj.display();
    // obj.deleteAtfirst();
    // obj.deleteAtfirst();
    // obj.deleteAtend();
    // obj.deleteAtend();
    // obj.deleteAtmiddle(3);
    // obj.deleteAtmiddle(5);
    // obj.deleteAtmiddle(1);
    // obj.deleteAtmiddle(2);
     obj.insertINsort(5);
     obj.insertINsort(10);
     obj.insertINsort(8);
     obj.insertINsort(35);
     obj.insertINsort(1);
     obj.insertINsort(7);
     obj.insertINsort(40);
     obj.insertINsort(38);
     obj.insertINsort(37);
     obj.insertINsort(41);
     obj.insertINsort(45);
     obj.insertINsort(20);
     obj.insertINsort(25);
     obj.insertINsort(22);
     obj.insertINsort(22);
     obj.insertINsort(45);
     obj.display();
    return 0;

}
