//8. Write a program in C to copy one string to another string.
#include<stdio.h>
int main()
{
    char str1[1000],str2[1000];
    int i,j;
    fgets(str1,1000,stdin);
    for(i=0;str1[i];i++)
    {
        str2[i]=str1[i];
        {
         printf("%c",str2[i]);
        }
    }
    
}