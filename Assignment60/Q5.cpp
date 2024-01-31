/*

5. Write a program to find the maximum element in BST

*/
#include<iostream>
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
                else if(this->data> v)
                {
                    this->left=this->left->insert(v);
                }
                else if(this->data < v)
                {
                     this->right=this->right->insert(v);
                }
                return this;
           }
           int maxelement()
           {
               if(this==NULL)
               {
                  return 0;
               }
               else if(this->right==NULL)
               {
                   return this->data;
               }
               else 
               {
                    this->right->maxelement();
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
      BST* root=new BST(20);
      root->insert(15);
      root->insert(25);
      root->insert(10);
      root->insert(18);
      root->insert(23);
      root->insert(30);
      root->insert(28);
      root->insert(40);
      root->insert(60);
      root->inorder();
      cout<<"\nMax element : "<<root->maxelement()<<endl;
}
