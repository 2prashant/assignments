#include<iostream>
using namespace std;
class node 
{
    public:
           int data;
           node *left;
           node *right;
    public: 
           node(int v)
           {
               data=v;
               left=NULL;
               right=NULL;
           }


            void preorder()
               {
                 if(this!=NULL)
                 {
                   cout<<data<<" ";
                   left->preorder();
                   right->preorder();
                 }
               }

               void Inorder()
               {
                  if(this!=NULL)
                  {
                      left->Inorder();
                      cout<<data<<" ";
                      right->Inorder();
                  }
               }

               void postorder()
               {
                   if(this!=NULL)
                   {
                       left->postorder();
                       right->postorder();
                       cout<<data<<" ";
                   }
               }
    
       
           
};
class tree
{ 
     public :
            //    void preorder(node *root)
            //    {
            //      if(root!=NULL)
            //      {
            //        cout<<root->data<<" ";
            //        preorder(root->left);
            //        preorder(root->right);
            //      }
            //    }

            //    void Inorder(node *root)
            //    {
            //       if(root!=NULL)
            //       {
            //           Inorder(root->left);
            //           cout<<root->data<<" ";
            //           Inorder(root->right);
            //       }
            //    }

            //    void postorder(node *root)
            //    {
            //        if(root!=NULL)
            //        {
            //            postorder(root->left);
            //            postorder(root->right);
            //            cout<<root->data<<" ";
            //        }
            //    }
    


               
};
int main()
{
    tree t;
    node *root=new node(2);
    root->left=new node(4);
    root->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    root->right->right->left=new node(8);
    root->right->right->right=new node(9);
    root->right->right->left->left=new node(10);
    root->right->right->left->right=new node(11);
    root->right->right->left->right->left=new node(12);

    // cout<<"Preorder traversal : "<<endl;
    // t.preorder(root);
    // cout<<"\nInorder Traversal : "<<endl;
    // t.Inorder(root);
    // cout<<"\nPostorder Traversal : "<<endl;
    // t.postorder(root);


    cout<<"Preorder traversal : "<<endl;
    root->preorder();
    cout<<"\nInorder Traversal : "<<endl;
    root->Inorder();
    cout<<"\nPostorder Traversal : "<<endl;
    root->postorder();
   
    return 0;
    
    


}
