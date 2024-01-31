/*                   Recursion in C Language
1. Write a recursive function to print first N natural numbers
*/
#include<stdio.h>
int naturalnum(int n);
int  main()
{
    int num;
    printf("print first n natural number \n enter number=");
    scanf("%d",&num);
     naturalnum(num);
}
int naturalnum (int n)
 {
      if(n==0)
      {
        return 1;
      }
      if(n!=0)
      {
        naturalnum(n-1);
        printf("%d ",n);
      }    
}
