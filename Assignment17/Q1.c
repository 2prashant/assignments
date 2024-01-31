/*                         String Basics in C Language
 1. Write a program to calculate the length of the string. (without using built-in method)
*/
#include<stdio.h>
int main()
{
    char str[100],i,n;
    fgets(str,100,stdin);
    for(i=0;str[i];i++)
    {
        continue;
    }
    printf("length of string=%d",i-1);
    return 0;
}
