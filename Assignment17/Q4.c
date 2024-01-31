//4. Write a program to convert a given string into uppercase.
#include<stdio.h>
int main()
{
    char str[1000];
    int i,j;
    printf("Enter lower case element");
    fgets(str,1000,stdin);
    printf("Enter upper case element");
    for(i=0;str[i];i++)
    {
        
        if(str[i]>=97 && str[i]<=122)
        {
          str[i]=str[i]-32;
        }
        printf("%c",str[i]);
    }
    printf("%c",str[i]);
}