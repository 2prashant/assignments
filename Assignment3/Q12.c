//12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
    char ch;
    printf("enter any alphabet check uppercase or lowercase=");
    scanf("%c",&ch);
    int x=(char)ch;
    if(65<=x && x<=90)
    {
        printf("Uppercase latter");
    }
    if(97<=x && x<=122)
    {
        printf("Lowercase latter");
    }
    return 0; 
}