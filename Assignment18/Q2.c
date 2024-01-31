//2. Write a function to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter your name");
    fgets(str,100,stdin);
    strrev(str);
    printf("reverse order:%s",str);
    return 0;

}