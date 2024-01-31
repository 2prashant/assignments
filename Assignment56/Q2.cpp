/*
2. Write a function that takes a list sorted in non-decreasing order and deletes any
duplicate nodes from the list. The list should only be traversed once.
For example if the linked list is 11->11->11->21->43->43->60 then
removeDuplicates() should convert the list to 11->21->43->60.
*/
// #include<iostream>
// #include<cstdlib>
// using namespace std;
// class node
// {
//     public:
//         int value;
//         node *next;

//       node()
//       {
//           value=0;
//           next=NULL;
//       }
// };
// class linkedlist
// {
//     private:
//           node *head;
//     public:
//         linkedlist()
//         {
//             head=NULL;
//         }
//         void insertAtEnd(int v)
//         {
//             node *temp=new node();
//             temp->value=v;
//             if(head==NULL)
//             {
//                 head=temp;
//             }
//             else
//             {
//                 node *t=head;
//                 while(t->next!=NULL)
//                 {
//                     t=t->next;
//                 }
//                 t->next=temp;
//             }

//         }
//         void insertAtfirst(int v)
//         {
//             node *temp=new node();
//               temp->value=v;
//               if(head==NULL)
//               {
//                    head=temp;
//               }
//               else
//               {
//                     temp->next=head;
//                     head=temp;  
//               }
//         }

//         int  insertAtMiddle(int position, int v)
//         {
//             node *temp=new node();
//                   temp->value=v;
//                   if(head==NULL)
//                   {
//                       head=temp;
//                   }
//                   else
//                   {
//                        node *t=head;
//                           while(position>1)
//                           {
//                               if(t->next==NULL)
//                               {
//                                    cout<<"indexd does not exit";
//                                    return 0;
//                               }
//                                position--;
//                                {
//                                     t=t->next;
//                                }
//                           }
//                           temp->next=t->next;
//                           t->next=temp;
//                   }
//         }
//         int  deletelinkedlist(int n)
//         {
//             node *temp=head;
//             if(n==1)
//             {
//                 head=head->next;
//                 cout<<temp->value<<"Delete value"<<endl;
//                 delete temp;
//             }
//             else
//             {
//                 while(n>1)
//                 {
//                     n--;
//                    if(temp->next->next!=NULL)
//                    {
//                        temp=temp->next;
//                    }
//                    else
//                    {
//                       cout<<"position does not exist";
//                       return 0;
//                    }
//                 }
//                 node *t=temp->next;
//                 temp->next=t->next;
//                 cout<<t->value<<"deleted value"<<endl;
//                 delete t;
//             }
//         }
//         void printlinkedlist()
//         {
//             node *t=head;
//             while(t!=NULL)
//             {
//                 cout<<t->value<<" ";
//                 t=t->next;
//             }

//         }


// };
// int main()
// {
//      linkedlist obj1;
//      int choice,v,position;
//      while(1)
//      {
//         cout<<"=========================================="<<endl;
//         cout<<"1.insertAtEnd"<<endl;
//         cout<<"2.insertAtbegining"<<endl;
//         cout<<"3.insertAtmiddle"<<endl;
//         cout<<"4.repeat element delete"<<endl;
//         cout<<"5.PrintlinkedList"<<endl;
//         cout<<"6.Exit"<<endl<<endl;
//         cout<<"Enter your choice=";
//         cin>>choice;
//         switch(choice)
//         {
//             case 1:
//                    {
//                          cout<<"Enter element";
//                          cin>>v;
//                          obj1.insertAtEnd(v);
//                          break;
//                    }

//              case 2:
//                   {
//                          cout<<"Enter element"<<endl;
//                          cin>>v;
//                          obj1.insertAtfirst(v);
//                          break;
//                    } 
//              case 3:
//                     {
//                         cout<<"Enter  position and element "<<endl;
//                         cin>>position>>v;
//                         obj1.insertAtMiddle(position,v);
//                         break;
//                     } 

//              case 4:
//                    {
//                        cout<<"element index"<<endl;
//                        cin>>position;
//                        obj1.deletelinkedlist(position);
//                        break;
//                    }    
//             case 5:
//                   {
//                          cout<<"Print Linkedlist"<<endl;
//                          obj1.printlinkedlist();
//                          break;
//                   }
//             case 6:
//                   {
//                       exit(0);
//                   }
//             default :
//                    {
//                       cout<<"Envalid choice"<<endl;
//                    }
//         }
//      }
//      return 0;
// }


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
class Linked_list
{
    private:
             node* head=NULL;
    public:
           
            void push_back(int v)
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
            void push_front(int v)
            {
                 node* temp=head;
                 node* x=new node(v);
                  x->next=temp;
                  head=x;
                 
            }
            void insert(int p,int v)
            {
                node* temp=head;
                node* prev=NULL;
                node* x=new node(v);
                if(p==1)
                {
                    x->next=temp;
                    head=x;
                }
                else
               {
                 while(p>1)
                 {
                    if(temp->next!=NULL)
                    {
                        prev=temp;
                        temp=temp->next;
                    }
                    else
                    {
                        cout<<"Index Does not exist "<<endl;
                        return;
                    }
                    p--;
                }
                x->next=temp;
                prev->next=x;
             }
            }
            bool find(int v)
            {
                node* temp=head;
                 while(temp!=NULL)
                 {
                    if(temp->data==v)
                    {
                        return true;
                    }
                    temp=temp->next;
                 }
                 return false;
            }
            void erase_begin()
            {
                node* temp=head;
                if(head==NULL)
                {
                    cout<<"Linked List is already empty"<<endl;
                }
                else
                {  
                   head=head->next;
                   delete temp; // or free(temp);
                }
            }
            void erase_end()
            {
                node* temp=head;
                node* prev=NULL;
                if(head==NULL)
                {
                    cout<<"Linked List is already empty"<<endl;
                    return;
                }
                while(temp->next!=NULL)
                {
                    prev=temp;
                    temp=temp->next;
                }
                prev->next=NULL;
                delete temp;

            }
            void erase_middle(int p)
            {
                node* temp=head;
                node* prev=NULL;
                if(head==NULL)
                {
                    cout<<"Linked list is already empty"<<endl;
                }
                else if(p==0)
                {
                    head=head->next;
                    delete temp;
                }
                else
                {
                    while(p>=1)
                    {
                        if(temp->next!=NULL)
                        {
                            prev=temp;
                            temp=temp->next;
                        }
                        else
                        {
                            cout<<"Position does not exist"<<endl;
                            return;
                        }
                        p--;
                    }
                       
                           prev->next=temp->next;
                           delete temp;
                    
                }
            }
            void removeDublicate()
            {
                node* temp=head;
                if(head==NULL || head->next==NULL)
                {
                    return;
                }
                while(temp!=NULL)
                {
                    node* check=temp;
                    while(check->next!=NULL && check->data==check->next->data)
                    {
                        check=check->next;
                    }
                    temp->next=check->next;
                    temp=temp->next;
                }
            }
            void display()
            {
                node *temp=head;
                while(temp!=NULL)
                {
                    cout<<temp->data<<" ";
                    temp=temp->next;
                }
                cout<<endl;
            }  
};
int main()
{
      Linked_list obj;
      obj.push_back(1);
      obj.push_back(2);
      obj.push_back(3);
      obj.push_back(4);
      obj.push_back(5);
      obj.push_front(99);
      obj.push_front(100);
      obj.push_front(88);
      obj.insert(3,33);
      obj.insert(1,11); 
      obj.insert(10,100);
      obj.insert(11,120);
      obj.display();
      cout<<obj.find(100);
      cout<<endl;
    // obj.erase_middle(99);
    obj.erase_begin();
    obj.erase_middle(3);
    obj.erase_middle(1);
    obj.erase_middle(0);
    obj.erase_middle(6);
    obj.erase_middle(7);
    obj.push_back(33);
    obj.push_front(5);
    obj.push_back(33);
    obj.removeDublicate();
     obj.display();
}
