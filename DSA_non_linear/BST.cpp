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
           BST()
           {
                data=0;
                left=NULL;
                right=NULL;

           }
          BST(int v)
          {
              data=v;
              left=NULL;
              right=NULL;
          }
          BST* insert(int value)
          {
              if(this==NULL)
              {
                  return new BST(value);
              }
              if(this->data<value)
              {
                    this->right=this->right->insert(value);
              }
              if(this->data>=value)
              {
                  this->left=this->left->insert(value);
              }
              return this;
          }
          void preOrder()
          {
              if(this!=NULL)
              {
                  cout<<this->data<<"=>";
                  this->left->preOrder();
                  this->right->preOrder();
              }
          }
          void Inorder()
          { 
              if(this!=NULL)
              {
                   this->left->Inorder();
                   cout<<this->data<<"=>";
                   this->right->Inorder();
              }
             
          }
          void postorder()
          {
             if(this!=NULL)
              {
                this->left->postorder();
                this->right->postorder();
                cout<<this->data<<"=>";
              }
          }
          void levelorderIT()
          {
              if(this==NULL)
              {
                  return;
              }
              queue<BST*> q;
              q.push(this);
              while(q.empty()==false)
              {
                  BST *temp=q.front();
                  cout<<temp->data<<"=>";
                  q.pop();
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
    BST* b=new BST(50),*root=NULL;
    b->insert(20);
    b->insert(80);
    b->insert(34);
    b->insert(15);
    b->insert(67);
    b->insert(31);
    cout<<"preorder:"<<endl;
    b->preOrder();
    cout<<endl;
    cout<<"Inorder"<<endl;
    b->Inorder();
    cout<<endl;
    cout<<"Postorder"<<endl;
    b->postorder();
    cout<<endl;
     cout<<"LevalOrder : "<<endl;
     b->levelorderIT();
     

}







// #include<iostream>
// #include<queue>
// using namespace std;
// class Node {

// public :

// 	int data;
// 	Node *left, *right;

// 	Node(int v)
// 	{
// 	    data = v;
// 	    left = NULL;
// 	    right = NULL;
// 	}
// };

// void printLevelOrder(Node* root)
// {
// 	if (root == NULL)
// 		return;

// 	queue<Node*> q;

// 	q.push(root);

// 	while (q.empty() == false) {

// 		Node* node = q.front();
// 		cout<<node->data<<" ";
// 		q.pop();

// 		if (node->left != NULL)
// 			q.push(node->left);

// 		if (node->right != NULL)
// 			q.push(node->right);
// 	}
// }

// int main()
// {

// 	Node* root = new Node(1);
// 	root->left = new Node(2);
// 	root->right = new Node(3);
// 	root->left->left = new Node(4);
// 	root->left->right = new Node(5);

// 	cout << "Level Order traversal of binary tree is \n";
// 	printLevelOrder(root);
// 	return 0;
// }
