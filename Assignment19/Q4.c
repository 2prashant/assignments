//4. Write a program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
   char str[15][30],temp[30];
   int i,j,flag=0;
   for(i=0;i<5;i++)
   {
       gets(str[i]);
   }
   for(i=0;i<5;i++)
   {
      if(strcmp(str[i],"prashant")==0)
      {
        printf("String is found");
        flag++;
        break;
      }
   }
     if(flag==0)
      {
        printf("String is not found");
      }
   return 0;
}