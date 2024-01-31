#include<iostream>
#include<math.h>
using namespace std;
#define max 1000
bool hashtable[max+1][2];
bool search(int n)
{
    if(n>0)
    {
         if(hashtable[n][0]==1)
         {
            return true;
         }
         else
         {
              return false;
         }
    }
    else
    {
         if(hashtable [abs(n)][1]==1)
         {
            return true;
         }
         else
         {
             return false;
         }
    }
}
void insert(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
       if(arr>0)
        {
            hashtable[arr[i]][0]=true;
        }
       else
       {
            hashtable[abs(arr[i])][1]=true;
       }
    }
    
}

int main()
{
    int arr[]={-1,9,2,-5,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    insert(arr,n);
    int find=4;
    if(search(find))
    {
        cout<<"Element is found"<<endl;
    }
    else
    {
        cout<<"Element is not found"<<endl;
    }
}