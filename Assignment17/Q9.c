//9. Write a C program to sort a string array in ascending order.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i,j,temp;
    gets(str);
    for(i=0;str[i];i++)
    {
        for(j=i+1;str[j]!='\0';j++)
        {
            if(strcmp(str[i],str[j])<0)
            {

                strcpy(temp,str[i]);
                strcmp(str[i],str[j]);
                strcmp(str[j],temp);
            }
        }
    }
    for(i=0;str[i];i++)
    printf("%c",str[i]);
}