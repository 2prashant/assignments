//2. Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
int main()
{
    char str[1000],ch;
    int i,count=0;
    printf("Enter a character =");
    scanf("%c",&ch);
    printf("Enter string ");
    scanf("%s",str);
    for(i=0;str[i]!=0;i++)
    {
        if(ch==str[i])
        {
          count++;
        }
    }
    printf("\n%d",count);
    return 0;
}