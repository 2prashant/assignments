/*
5. Given a linked list, check if the linked list has a loop or not. The below diagram shows
a linked list with a loop.
*/
// solved on gfg
#include<bits/stdc++.h>
using namespace  std;
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
class LinkedList
{
    private:
             node* head=NULL;
    public:
              void insert()
              {
                   
              }
              bool checkloop()
              {
                  node* temp=head;
                  unordered_set<node*> s;
                  while(temp->next!=NULL)
                  {
                      if(s.find(temp->next)!=s.end())
                      {
                          return true;
                      }
                      else
                      {
                          s.insert(temp->next);
                          temp=temp->next;
                      }
                  }
              }
        
};
int main()
{
    
} 

