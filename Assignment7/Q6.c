//6. Write a program to print all Prime numbers under 100.
#include<stdio.h>
int main()
{
    int i,n,flag=0;
    printf("print all prime number under 100\n");
    printf("prime number: ");
   for(n=1;n<=100;n++) 
   {
    flag=0;
      for(i=2;i<=n/2;i++)
    {
       if(n%i==0)
         flag=1;
      
    } 
    if(flag==0)
    {
     printf("%d ",n);
    }
  }
    return 0;
}    
    
