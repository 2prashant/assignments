#include<iostream>
using namespace std;
class pQueue
{
    private:
            int q[6];
            int size=6;
            int rear;
            int front;
    public:
            pQueue()
           {
                rear=-1;
                front=-1;
           }
           void Enqueue(int v)
           {
              if(rear==-1)
              {
                  front++;
                  rear++;
                  q[rear]=v;
              }
              else if(rear==size-1)
              {
                  cout<<"Queue is full"<<endl;
              }
              else
              {
                 int i;
                   for( i=rear;i>=0;i--)
                   {
                      if(q[i]<v)
                      {
                          q[i+1] =q[i];
                      }
                      else
                      {
                          break;
                      }
                   }
                   i++;
                   q[i]=v;
                   rear++;
              }
           }
           void Dequeue()
           {
                if(rear==-1)
                {
                    cout<<"Queue is already empty"<<endl;
                }
                else if(rear==front)
                {
                      cout<<q[front]<<" deleted "<<endl;
                      rear=front=-1;
                }
                else
                {
                      cout<<q[front]<<" deleted "<<endl;
                      front++;

                }
           }
           void display()
           {
               if(rear==-1)
               {
                   cout<<"Queue is  empty"<<endl;
               }
               else
               {
                   for(int i=front;i<=rear;i++)
                   {
                       cout<<q[i]<<" ";
                   }
               }
           }
};
int main()
{
     pQueue obj;
     obj.Enqueue(3);
     obj.Enqueue(4);
     obj.Enqueue(8);
     obj.Enqueue(6);
     obj.Enqueue(10);
     obj.Enqueue(1);
     obj.Dequeue();
     obj.Dequeue();
      obj.Dequeue();
     obj.Dequeue();
     obj.Dequeue();
     obj.Dequeue();
    
     obj.display();

}