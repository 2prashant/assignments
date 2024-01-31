//6. Write a program to sort elements of an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int num[10];
    int temp=0;
    printf("Enter 10 number");
    for(int i=0; i<=9;i++)
    {
           scanf("%d",&num[i]);
    }
    for(int i=0;i<=9; i++)
    {
        for(int j=i+1; j<10; j++)
        {
            if(num[i]>num[j])
            {
             temp=num[i];
             num[i]=num[j];
             num[j]=temp;
            }
        }
    }
    for(int i=0; i<=9; i++)
    {
       printf("%d ",num[i]);
    }
    
}
