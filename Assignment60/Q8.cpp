/*

8. Write a program to find the height of a tree.

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
            int Height()
            {
                  if(this==NULL) 
                  {
                      return 0;
                  }
                  int lheight=this->left->Height();
                  int rheight=this->right->Height();
                  if(lheight > rheight)
                  {
                      return lheight+1;
                  }
                  else 
                  {
                      return rheight+1;
                  }
            }
};
int main()
{
        BST *root=new BST(1);
        root->insert(2);
        root->insert(3);
        root->insert(4);
        root->insert(6);
        root->insert(8);
        cout<<"\nHeight of tree is : "<<root->Height()<<endl;
}