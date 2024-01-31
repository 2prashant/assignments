//7. Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
int main()
{
    int arr[1000],count=0,n,i,j;
    printf("Enter array size");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<=n;j++)
    {
         if(arr[i]==arr[j])
         {
            count++;
         }
    }
   }
   printf("\n total number of duplicate elements in an array=%d",count);
   return 0;

}
