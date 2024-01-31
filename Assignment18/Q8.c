//8. Write a function to count words in a given string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int  count=1;
    printf("Enter character");
    fgets(str,100,stdin);
    for(int i=0;str[i];i++)
       if(str[i]==' ' && str[i+1]!=' ')
       {
           count++;
       }
     printf("count word=%d",count);
    return 0;

}

