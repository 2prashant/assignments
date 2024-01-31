/*
9. Write a function in C to merge two arrays of the same size sorted in descending
order.
*/

#include<stdio.h>
int main()
{
    // NOT SLOVE
    int i,j,k=0,n,arr[1000],c[1000];
    printf("Enter array size=");
    scanf("%d",&n);
    printf("Enter first array element=");
    for(int i=0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter second array element=");
    for(int j=0;j<n;j++)
    {
          scanf("%d",&arr[j]);
    }
    printf("merge two array=");  
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                 k=arr[i];
                 k++;
                 i++;
            }
            else
            {
                k=arr[j];
                k++;
                j++;
            }
        }

    }


}

