//7. Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j;
    fgets(str,100,stdin);
    int len=strlen(str);
    printf("%d\n",len);
    i=0;
    j=len-2;
    while(i<=j)
    {
      if(str[i]!=str[j])
       break;
       i++;
       j--;
    }
    if(i>j)
    printf("palidrome");
    else
    printf("NOt palindrome");
    return 0;
    
}