//6. Write a program to print the strings which are palindrome in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20][30];
    int i,j;
    for(i=0;i<4;i++)
    {
        gets(str[i]);
    }
    for(i=0;i<4;i++)
    {
      i=0;
      int len=strlen(str[i]);
      j=len-2;
      while(i<=j)
      {
        if(str[i]!=str[j])
        {
            break;    
        }
        i++;
        j--;
      }
      if(i>j)
      {
        printf("palidrome");
      }
      else
      {
        printf("Not palindrome");
      }
     j=0;
     }
   return 0;
}