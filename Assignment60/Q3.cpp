/*

3. Write a program to print elements of a tree at a given level using recursion.


*/
#include<iostream>
#include<queue>
using namespace std;
class BST
{
    private:
          int data;
          BST* left;
          BST* right;
    public:
           BST(int v)
           {
               data=v;
               left=NULL;
               right=NULL; 
           }
           BST()
           {
              data=0;
              left=NULL;
              right=NULL;
           }
           BST* insert(int v)
           {
                if(this==NULL)
                {
                    return new BST(v);
                }
                if(this->data > v)
                {
                    this->left=this->left->insert(v);
                }
                if(this->data < v)
                {
                    this->right=this->right->insert(v);
                }
                return this;
           }
           int Height()
           {
               if(this==NULL)
               {
                  return 0;
               }
               int lheight=this->left->Height();
               int rheight=this->right->Height();
               if(lheight> rheight)
               {
                   return lheight+1;
               }
               else
               {
                   return rheight+1;
               }
           }
           void printlevelorderRR(int i)
           {
                int h=this->Height();
            //    for(int i=0;i<h;i++)
            //    {
                     this->printcurrentLevel(i);

              // }
           }
           void printcurrentLevel(int Level)
           {
                if(this==NULL)  
                {
                     return;
                }
                else
                {
                     if(Level==0)
                     {
                         cout<<this->data<<"=>";
                     }
                     else if(Level>0)
                     {
                        this->left->printcurrentLevel(Level-1);
                        this->right->printcurrentLevel(Level-1);
                     }
                }
           }
           void inorder()
           {
                if(this!=NULL)
                {
                      this->left->inorder();
                      cout<<this->data<<"=>";
                      this->right->inorder();
                }
           }
           void currentLevelIT()
           {
                 if(this==NULL)  
                 {
                    return;
                 }
                 queue<BST*> q;
                 q.push(this);
                 while(q.empty()==false)
                 { 
                      BST* temp=q.front();
                      q.pop();
                      cout<<temp->data<<"=>";
                      if(temp->left!=NULL)
                      {
                         q.push(temp->left);
                      }
                      if(temp->right!=NULL)
                      {
                        q.push(temp->right);
                      }
                 }
           }

};
int main()
{
    BST* root=new BST(25);
    root->insert(15);
    root->insert(40);
    root->insert(10);
    root->insert(18);
    root->insert(30);
    root->insert(60);
    root->insert(50);
    root->insert(70);
    root->insert(65);
    root->inorder();
    cout<<endl;
    root->printlevelorderRR(3);
    cout<<"\nRL\n: ";
    root->currentLevelIT();


}
