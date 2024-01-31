//2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
#include<string.h>
char swapstring(char **str1[], char **str2[]);
int main()
{
    char *str1[100],*str2[100];
    printf("Enter two string");
    fgets(str1,100,stdin);
    fgets(str2,100,stdin);
    swapstring(&str1,&str2);
    printf("%s %s",str1,str2);
    return 0;
}
char swapstring(char **str1[], char **str2[])
{
    char *temp;
    strcpy(temp,*str1);
    strcpy(*str1,*str2);
    strcpy(*str2,temp);
    return (*str1,*str2);
}
