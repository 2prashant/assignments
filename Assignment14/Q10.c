/*10. Write a program in C to copy the elements of one array into another array.Take array
values from the user.
*/
#include<stdio.h>
int main()
{
    int arr1[10],arr2[10];
    printf("enter 10 number");
    for(int i=0;i<=9;i++)
    {
      scanf("%d",&arr1[i]);
    }
    for(int i=0;i<=9; i++)
    {
        arr2[i]=arr1[i];
        printf("%d ",arr2[i]);
    }
}