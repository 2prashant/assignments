/*


6. Find the length of the diameter of the tree.


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
                      return  new BST(v);
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
            int diametertree()
            {
                BST* temp=this;
                if(temp==NULL)
                {
                     return 0;
                }
                int count=0;
                while(temp->left!=NULL)
                {
                      count++;
                      temp=temp->left;
                }
           //     cout<<"\n min element : "<<temp->data<<endl;
                
                BST* temp1=this;
                if(temp1==NULL)
                {
                    return 0;
                }
                while(temp1->right!=NULL)
                {
                    count++;
                    temp1=temp1->right;
                }
         //      cout<<"\n Max elemment : "<<temp1->data<<endl;
                return count+1;
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
      cout<<"\ndiameter of tree : "<<root->diametertree();
}