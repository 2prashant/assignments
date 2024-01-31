/*

Queue
1. Create a Queue using Array or Dynamic Array.

*/
#include<iostream>
using namespace std;
// class Queue
// {
//     private:
//               int q[5];
//               int front;
//               int rear;
//               int size;
             
//     public:
//                 Queue()
//                 {
//                       front=-1;
//                       rear=-1;
//                       size=5;
//                 }
//              void enqueue(int v)
//              {
//                    if(rear==-1)
//                    {
//                        front++;
//                        rear++;
//                        q[rear]=v;
//                    }
//                    else if(rear==size-1)
//                    {
//                        cout<<"Queue is full"<<endl;
//                        return;
//                    }
//                    else
//                    {
//                        q[++rear]=v;
//                    }
                   
//              }
//              void dequeue()
//              {
//                   if(front==-1)
//                   {
//                       cout<<"Queue is already empty"<<endl;
//                       return;
//                   }
//                   else if(front==rear)
//                   {
//                        cout<<q[front]<<" : deleted"<<endl;
//                        front=rear=-1;
//                   }
//                   else
//                   {
//                          cout<<q[front]<<" : deleted"<<endl;
//                          front++;
//                   }
//              }
//              void display()
//              {
//                 for(int i=0;i<=rear;i++)
//                 {
//                    cout<<q[i]<<" ";
                      
//                 }
//                 cout<<endl;
//              }
             
         
// };
// int main()
// {
//      Queue obj;
//      obj.enqueue(15);
//      obj.enqueue(30);
//      obj.enqueue(45);
//      obj.enqueue(60);
//      obj.enqueue(75);
//      obj.enqueue(90);
//      obj.display();
//      obj.dequeue();
//      obj.dequeue();
//      obj.dequeue();
//      obj.dequeue();

//      return 0;
// }

class Queue
{
     private:
             int arr*;
             int rear;
             int front;
             int size;
             int capacity=1;
     public:
            Queue()
              {
                   arr=new int[1];
                   size=0;
                   capacity=1;
              }
              void resize()
              {
                   
              }
             void enqueue(int v)
             {
                   if(size==capacity)
                   {
                       resize();
                   }
                   if(size>capacity || )
             }
    
}