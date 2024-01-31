/*

2. Write a program to search element in a BST.

*/

#include<iostream>
using namespace std;
class BST
{
    private:
          int data;
          BST *left;
          BST *right;
     public:
           BST(int v )
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
           void  Search(int v)
           {
               int flag=0;
               if(this==NULL)
               {
                  return;
               }
               if(this->data==v)
                    {
                        flag++;
                        cout<<"Value is found"<<endl;
                       
                    }
                else if(this->data > v)
                    {
                          this->left->Search(v);
                    }
                else 
                    {
                        this->right->Search(v); 
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

};
int main()
{
     BST* root=new BST(2);
     root->insert(4);
     root->insert(8);
     root->insert(6);
     root->insert(10);
     root->insert(11);
     root->insert(14);
     root->inorder();
     cout<<endl;
     root->Search(11);
     root->Search(88);

}