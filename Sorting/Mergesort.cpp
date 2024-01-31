#include<iostream>
using namespace std;
void merge(int arr[],int s1,int e1,int s2,int e2)
{
       int n1=e1-s1;
       int n2=e2-s2;
       int size=n1+n2;
       int temp[size];
       int i=s1,j=s2,k=0;
       while(i<=e1 && j<=e2)
       {
           if(arr[i]<arr[j])
           {
               temp[k]=arr[i];
               i++;
               k++;
           }
           else
           {
              temp[k]=arr[j];
              j++,k++;
           }
       }
        while(i<=e1)
       {
          temp[k]=arr[i];
          i++,k++;
       }
       while(j<=e2)
       {
          temp[k]=arr[j];
          j++,k++;
       }
       for(int k=0,i=s1;i<=e2;i++,k++)
       {
           arr[i]=temp[k];
       }
    
}

void mergesort(int arr[],int i, int j)
{
    int mid=(i+j)/2;
    if(i<j)
    {
        mergesort(arr,i,mid);
        mergesort(arr,mid+1,j);
        merge(arr,i,mid,mid+1,j);
    }
}
int main()
{
    int arr[8]={3,7,1,9,2,67,4,23};
    mergesort(arr,0,8);

    for(int k=0;k<8;k++)
    {
        cout<<arr[k]<<" ";
    }
    
    return 0;
}