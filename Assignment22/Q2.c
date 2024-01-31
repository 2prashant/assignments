/*
2. Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,c;
    int i=0,size,sum=0;
    printf("Enter size of array=");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocatin failed \n");
        return 0;
    }
    printf("\n the entered %d value \n",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",ptr+i);//(ptr+i)==> value plus in addres
    }
    for(int i=0;i<size;i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("\n Average=%d",sum/size);
    free(ptr);
    return 0;
}
