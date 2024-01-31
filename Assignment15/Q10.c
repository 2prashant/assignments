//10. Write a function in C to count the frequency of each element of an array.
#include<stdio.h>
int main()
{
    int arr[100]={1,23,1,5,7,5,9,8,87,8,8};
    int funct[100]={0},i;
     for(i=0;i<=10;i++)
     {
          funct[arr[i]]++;
     }
     for(i=0;i<=100;i++)
     {
        if(funct[i]!=0)
        printf("%d ==> %d\n",i,funct[i]);
     }
}