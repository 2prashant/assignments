/*9. Write a program that asks the user to enter a username. If the username entered is 
one of the names in the list then the user is allowed to calculate the factorial of a 
number. Otherwise, an error message is displayed
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100][100],i,j,fact=1,flag=0;
    printf("Enter user name=");
    fgets(str,100,stdin); 
    for(int i=0;str[i];i++)
    {
        if(strcmp(str[i],"Prashant")==0)
         flag++;
      
    }
    if(flag>0)
     {
        for(int i=8;i<0;i--)
        {
             fact=fact*i;
        }
        printf("fact=%d",fact);
        flag++;
     }
    if(flag==0)
    printf("Error");
    return 0;        
}
