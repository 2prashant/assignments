/*6. Write a function to check whether a given string is an alphanumeric string or not. 
(Alphanumeric string must contain at least one alphabet and one digit)
*/
#include<string.h>
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter character");
    fgets(str,100,stdin);
     for(int i=0;str[i];i++)
     {
        if((str>='a' && str<='z') && (str>='1' && str<='9'))
        {
            printf("alphanumeric string");
            break;
        }
     }
     return 0;
}