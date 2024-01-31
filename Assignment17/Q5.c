//5. Write a program to convert a given string into lowercase.
#include<stdio.h>
int main()
{
    char str[1000];
    int i,j;
    printf("Enter upper case  element:");
    fgets(str,1000,stdin);
    printf("\n");
    printf("lower case element=");
    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        printf("%c",str[i]);
    }
}