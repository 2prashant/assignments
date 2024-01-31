/*
//Completed

                           DSA Singly Linked List

1. Given a linked list and a key ‘X‘ in, the task is to check if X is present in the linked list
or not.
Examples:
Input: 14->21->11->30->10, X = 14
Output: Yes
Explanation: 14 is present in the linked list.
Input: 6->21->17->30->10->8, X = 13
Output: No
*/
#include<iostream>
#include<cstdlib>
using namespace std;
class node
{
    public:
        int value;
         node *next;

         node()
         {
            int value=0;
            next=NULL;
         }

};
class linkedlist
{
    private:
          node *head;
    public:
         linkedlist()
         {
            head=NULL;
         }
         void insert(int v)
         {
             node *temp=new node();
             temp->value=v;
             if(head==NULL)
             {
                 head=temp;
             }
             else
             {
                node *t=head;
                while(t->next!=NULL)
                {
                    t=temp->next;
                }
                 t->next=temp;
             }
         }

         int  search(int val)
         {
             node *temp=head;
             if(head==NULL)
             {
                 cout<<"Linkedlist is empty";
             }
             else
             {
               while(temp!=NULL)
               {
                    if(temp->value==val)
                    {
                        cout<<"X = "<<temp->value<<endl;
                        cout<<"Element is found"<<endl;
                        return 0;
                    }
                    temp=temp->next;
               }
               cout<<"Element does not Exist"<<endl;
             }

         }
         void printLinked()
         {
             node *t=head;
             while(t!=NULL)
             {
                 cout<<t->value<<"->";
                  t=t->next;
             }
             cout<<endl;
         }

};
int main()
{
     linkedlist obj1;
     int choice;
     int V;
     while(1)
     {
          cout<<"==============================================="<<endl;
          cout<<"1.insert element"<<endl;
          cout<<"2.search element"<<endl;
          cout<<"3.Print"<<endl;
          cout<<"4.Exit"<<endl;
          cout<<endl;
          cout<<"Enter your choice=";
          cin>>choice;
       switch(choice)
     {
          case 1:
                  {
                       cout<<"insert element";
                       cin>>V;
                       obj1.insert(V);
                       break;
                  }
           case 2:
               {
                    cout<<"search element";
                    cin>>V;
                    obj1.insert(V);
                    break;
               }
            case 3:
            {
                 cout<<"printlinkedlist"<<endl;
                 obj1.printLinked();
                 break;
            }
            case 4:
               {
                  exit(0);
               }
        }
     }

     return 0;
}