//5. Write a function to transform a string into lowercase.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter your name");
    fgets(str,100,stdin);
    strlwr(str);
    printf("transform a string into lower case=%s",str);
    return 0;
}