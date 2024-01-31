#include<iostream>
using namespace std;
class ccqueue
{
    private:
      int q[5];
      int size=5;
      int rear;
      int front;
    
    public:
         ccqueue()
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
            else if((rear+1)%size==front)
            {
                  cout<<"Queue is full"<<endl;
            }
            else
            {
                rear=(rear+1)%size;
                q[rear]=v;
            }
         }
         void Dequeue()
         {
            if(front==-1)
            {
                cout<<"Queue is already empty"<<endl;
            }
            else if(front==rear)
            {
                cout<<q[front]<<" Deleted "<<endl;
                front=rear=-1;
            }
            else
            {
              
                cout<<q[front]<<" deleted "<<endl;
                  front=(front+1)%size;
              
            }
         }
         void display()
        {
            if(front == -1)
            {
                cout<<"Queue is Empty"<<endl;
                return;
            }
            int i = front;
            while(1)
            {
                cout<<q[i]<<" ";
                 if(i == rear)
                    break;
                i = (i+1)%size;
            }
            cout<<endl;
        }
         

};
int main()
{
     ccqueue obj;
     obj.Enqueue(10);
     obj.Enqueue(20);
     obj.Enqueue(30);
     obj.Enqueue(40);
     obj.Enqueue(50);
     obj.Enqueue(60);
     obj.Dequeue();
     obj.Enqueue(70);
     obj.display();
}