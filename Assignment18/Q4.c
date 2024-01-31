//4. Write a function to transform string into uppercase
#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("Enter your name");
    fgets(str,20,stdin);
    strupr(str);
    printf("Hello %s",str);
    printf("\n");
    return 0;
    
}