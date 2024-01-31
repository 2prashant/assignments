//8. Write a recursive function to print binary of a given decimal number.
#include<stdio.h>
int main()
{
    void dtob(int num);
    int num;
    printf("Enter number =");
    scanf("%d",&num);
    dtob(num);

}
/* 
      OR
void dtob(int num)
{
    if(num>0)
     {
       dtob(num/2);
       printf("%d",num%2);
     }   
}
*/
void dtob(int num)
{
  if(num==0)
    return ;
     dtob(num>>1);
     printf("%d",num&1);
  

}