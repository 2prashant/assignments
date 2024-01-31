/*

Binary Tree and Binary Search Tree

1. Write a program to print 3rd level all node in a tree

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
              else if(this->data > v)
              {
                  this->left=this->left->insert(v);
              }
              else if(this->data < v)
              {
                  this->right=this->right->insert(v);
              }
              return this;
           }
           void LevelorderIT()
           {
              int count=0;
               if(this==NULL)
               {
                  return;
               }
               queue<BST*> q;
               q.push(this);
               while(q.empty()==false)
               {
                   BST *temp=q.front();
                   q.pop();
                   count++;
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
               cout<<"\ncount= "<<count<<endl;
           }
           int Height()
           {
                if(this==NULL)
                {
                    return 0;
                }
                else
                {
                    int lheight=this->left->Height();
                    int Rheight=this->right->Height();
                    if(lheight>Rheight)
                    {
                        return lheight+1;
                    }
                    else
                    {
                        return Rheight+1;
                    }
                }
           }
           void LevelOrderRR()
           {
               int height=this->Height();
               for(int i=0;i<height;i++)
               {
                   this->currentLevel(3);
              }
           } 
            void currentLevel(int Level)
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
                            this->left->currentLevel(Level-1);
                            this->right->currentLevel(Level-1);
                        }
                   }

            }
           

           void inoder()
           {
               if(this!=NULL)
               {
                this->left->inoder();
                cout<<this->data<<"=>";
                this->right->inoder();
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
    root->inoder();
    cout<<"\nLevel order:\n";
    root->LevelorderIT();
    cout<<"\nLevel Order RR :\n";
    root->LevelOrderRR();
}