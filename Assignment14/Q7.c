//7. Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h>
int main()
{
    int arr[10];
    int temp=0;
    printf("\nEnter 10 number:");
    for(int i=0; i<=9;i++)
   {
      scanf("%d",&arr[i]);
   }
   for(int i=0; i<=9; i++)
   {
    for(int j=i+1; j<10; j++)
    {
        if(arr[i]<arr[j]) 
        {
          temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
        }


    }
   }
    printf("\n");
    printf("\nsecond largest number=%d",arr[1]);

}