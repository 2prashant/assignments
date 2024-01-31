#include<iostream>
using namespace std;
class node
{
     public:
           int data;
           node* next;
     public:
           node(int v)
           {
                data=v;
                next=NULL;
           }
};
class singleLinkledlist
{
   private:
           node* head=NULL;
    public:
           void reverseLinkedList()
           {
                node* prev=NULL;
                 node* current=head;
                 node* NEXT=NULL; 
                 while(current!=NULL)
                 {
                     NEXT=current->next;
                     current->next=prev;
                     prev=current;
                     current=NEXT;
                 }
                 head=prev;
           }
           void insertAtmiddle(int p, int v)
           {
                node* temp=head;
                node* x=new node(v);
                if(p==0)  
                {
                     if(head==NULL)
                     {
                          head=x;
                     }
                     else
                     {
                          x->next=head;
                          head=x;
                     }
                   return; 
                }
                else
                {
                    while(p>1)
                     {
                        if(temp==NULL || p<1 )
                        {
                              return;
                        }
                        else
                        {
                            temp=temp->next;
                            p--;
                        }
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

           void display()
           {
              node* temp=head;
              while(temp!=NULL)
              {
                   cout<<temp->data<<"=>";
                   temp=temp->next;
              }
           }

};
int main()
{
   singleLinkledlist obj;
   obj.insertAtmiddle(0,5);
   obj.insertAtmiddle(1,99);
    obj.insertAtmiddle(2,100);
    obj.insertAtmiddle(3,98);
    obj.insertAtmiddle(1,55);
   obj.display();
   cout<<endl;
   obj.reverseLinkedList();
   obj.display();

}