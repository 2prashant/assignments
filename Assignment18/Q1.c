 /*                         String and Functions in C Language
1. Write a function to calculate length of the string
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter your name");
    fgets(str,100,stdin);
    int l=strlen(str);
    printf("length of string=%d",l-1);
    return 0;

}