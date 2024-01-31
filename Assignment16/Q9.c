//9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include<stdio.h>
int main()
{
    int arr[100][100],i,j;
    int n,count=0;
    printf("Enter array size=");
    scanf("%d",&n);
    printf("Enter array element");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
       {
         if(arr[i][j]==0)
         count++;
       }
    }
    if(count>n/2)
    {
        printf("sparse matrix");
    }
    else{
        printf(" not sparse matrix");
    }
}