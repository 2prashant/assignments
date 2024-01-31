/*
3. Write a program to calculate the sum of n numbers entered by the user using malloc
and free.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *num;
    int i=0,sum=0,size;
    printf("Enter total number=");
    scanf("%d",&size);
    num=(int*)malloc(size*(sizeof(int)));
    if(num==NULL)
    {
        printf("\nMemory is not allocated");
        return 0;
    }
    printf("Entered %d value\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",num+i);
    }
    for(i=0;i<size;i++)
    {
        sum+=*(num+i);
    }
    printf("\n sum=%d",sum);
    return 0;
}
