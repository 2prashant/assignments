#include <bits/stdc++.h>
using namespace std;

class node {
public:
	int data;
	node *left, *right;

	node(int v)
	{
	    data = v;
	    left = NULL;
	    right = NULL;
	}
};

void printCurrentLevel(node* root, int level);

int height(node* node);
node* newNode(int data);


void printLevelOrder(node* root)
{
	int h = height(root);
	int i;
	for (i = 1; i <= h; i++)
		printCurrentLevel(root, i);
}

void printCurrentLevel(node* root, int level)
{
	if (root == NULL)
		return;
	if (level == 1)
		cout << root->data << " ";
	else if (level > 1) {
		printCurrentLevel(root->left, level - 1);
		printCurrentLevel(root->right, level - 1);
	}
}

int height(node* node)
{
	if (node == NULL)
		return 0;
	else {
		int lheight = height(node->left);
		int rheight = height(node->right);

		if (lheight > rheight) {
			return (lheight + 1);
		}
		else {
			return (rheight + 1);
		}
	}
}
/* Driver code*/
int main()
{
	node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->left->right = new node(5);

	cout << "Level Order traversal of binary tree is \n";
	printLevelOrder(root);

	return 0;
}

// This code is contributed by rathbhupendra





/*


#include<iostream>
using namespace std;
class node
{
    public:
              int data;
              node *left;
              node *right;
    public:
           node(int value)
           {
               data=value;
               left=NULL;
               right=NULL;
           }
};
class Levelorder
{
     public:
           void levelorderT(node *root)
           {
              int hight=Hight(root);
              for(int i=0;i<hight;i++)
              {
                   currentlevel(root,i);
              }
           }
           void currentlevel(node *root,int level)
           {
                if(root==NULL)
                  return;
                else if(level==0)
                {
                    cout<<root->data<<"=>";
                }
                else if(level>0)
                {
                    currentlevel(root->left,level-1);
                    currentlevel(root->right,level-1);
                }
           }
           int  Hight(node *root)
           {
               if(root==NULL)
               {
                  return 0;
               }
               else
               {
                  int lheight=Hight(root->left);
                  int rheight=Hight(root->right);
                  if(lheight>rheight)
                  {
                      return lheight+1;
                  }
                  else
                  {
                     return rheight+1;
                  }
               }
           }
           
};
int main()
{
    node* root=new node(13);
    root->left=new node(10);
    root->right=new node(15);
    root->left->left=new node(9);
    root->right->right=new node(18);
    root->right->left=new node(17);
    root->left->left->right=new node(12);
    root->left->left->left=new node(5);
    Levelorder obj;
    obj.levelorderT(root);
    
}


*/