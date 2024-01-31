/*
3. Given a singly linked list, write a function to swap elements pairwise.
Input : 1->2->3->4->5->6->NULL
Output : 2->1->4->3->6->5->NULL
Input : 1->2->3->4->5->NULL
Output : 2->1->4->3->5->NULL
Input : 1->NULL
Output : 1->NULL

*/
#include<iostream>
using namespace std;
class node
{
    public: 
            int data;
            node* next;
            node(int v)
          {
            data=v;
            next=NULL;
          }
};
class singleLinked
{
   private:
          node* head;
   public:
           singleLinked()
           {
               head=NULL;
           }
           
           void insertAtbegin(int v)
           {
                node* temp=head;
                node* x=new node(v);
                x->next=temp;
                head=x;
           }
           void insertAtend(int v)
           {
               node* temp=head;
               node* x=new node(v);
               if(head==NULL)
               {
                   head=x;
                   x=head;    
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
           void insertAtmiddle(int p, int v)
           {
                node* temp=head;
                node* x=new node(v);
                if(p==0)  
                {
                   x->next=head;
                   head=x; 
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
           void swap()// swap only data not node
           {

             node* temp=head;
              if(head==NULL || head->next==NULL)
             {
                return;
              }
             while(temp->next!=NULL)
            {
               int x=temp->data;
               temp->data=temp->next->data;
               temp->next->data=x;
               if(temp->next==NULL || temp->next->next==NULL)
               {
                  break;
               }
                temp=temp->next->next;
            }
      














        //              Node* dummy=new Node(0);
        //  dummy->next=head;
         
        //  Node *point=dummy;
        //  while(point->next!=NULL && point->next->next!=NULL)
        //  {
        //      Node *swap1=point->next;
        //      Node *swap2=point->next->next;
             
        //      swap1->next=swap2->next;
        //      swap2->next=swap1;
             
             
           
        //      point->next=swap2;
        //      point=swap1;
        
        //  }
        //  return dummy->next;
         
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
   singleLinked obj;
   obj.insertAtbegin(11);
   obj.insertAtbegin(10);
   obj.insertAtbegin(9);
   obj.insertAtbegin(8);
   obj.insertAtbegin(7);
   obj.insertAtbegin(6);
   obj.insertAtend(12);
   obj.insertAtend(13);
   obj.insertAtend(14);
   obj.insertAtmiddle(0,5);
   obj.insertAtmiddle(1,99);
   obj.insertAtmiddle(10,100);
   obj.insertAtmiddle(10,98);
   obj.insertAtmiddle(5,55);
   obj.dispaly();
   obj.swap();
   obj.dispaly();
}