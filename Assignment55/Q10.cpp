
// 10. Your task is to implement 2 stacks in one array efficiently.
// Example 1:
// Input:
// enqueue(2)
// enqueue(3)
// dequeue()
// enqueue(4)
// dequeue()
// Output: 2 3
// Explanation:
// enqueue(2) the queue will be {2}
// enqueue(3) the queue will be {3 2}
// dequeue() the poped element will be 2
// the stack will be {3}
// enqueue(4) the stack will be {4 3}
// dequeue() the poped element will be 3.
// Example 2:
// Input:
// enqueue(2)
// dequeue()
// dequeue()
// Output: 2 -1


#include<bits/stdc++.h>
using namespace std;
class queue
{
    private:
            int arr[50];
            int top=-1;
             int size=0;
             int capacity=49;
    public:
          void enqueue(int n)
          {
            if(size==capacity)
            {
                cout<<"queue is full"<<endl;
            }
            else
            {
                a[++top]=n;
                size++;
            }
          }
          int dequeue()
          {
              if(size==0 || top==-1)
              {
                cout<<"stack is already empty"<<endl;
              }
              else
              {
                   size--;
                   return a[top--];
              }
          }


}
int main()
{

}