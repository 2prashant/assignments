/*16. Write a program to check whether a given character is an alphabet (uppercase), an 
alphabet (lower case), a digit or a special character.
*/
#include<stdio.h>
int main()
{
    char ch;
    printf("enter any character or special character=");
    scanf("%c",&ch);
    if(65<=ch && ch<=90)
    {
        printf("Upper case");
    }
    if(97<=ch && ch<=122)
    {
        printf("lower case");
    }
    if((0<=ch && ch<=9) || (ch<=48 && ch<=57))
    {
        printf("special character");
    }
    return 0;
}
