//6. Write a program to reverse a string.
#include<stdio.h>
int main()
{
    char str[1000];
    int i,count=0;
    printf("Enter characters");
    fgets(str,1000,stdin);
    for(i=0;str[i];i++)
    {
        count++;
    }
    for(i=count;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}