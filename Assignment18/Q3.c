//3. Write a function to compare two strings.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    printf("Enter your name");
    fgets(str1,100,stdin);
    fgets(str2,100,stdin);
   int l=strcmp(str1,str2);
    printf("%d",l);
    return 0;
}