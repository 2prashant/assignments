//7. Write a recursive function to calculate HCF of two numbers.
#include<stdio.h>
int main()
{
   // NOT SOlVE
    int hcfcal(int num1,int num2);
    int num1,num2;
    printf("Enter number=");
    scanf("%d%d",&num1,&num2);
    printf("\n HCF=%d",hcfcal(num1,num2));
    return 0;
}
int hcfcal(num1,num2)
{
    if(num1>num2)
    {
        hcfcal(num1%num2,num2);
        if(num1%num2==0)
          return num2;
    }
    if(num1<num2)
    {
        hcfcal(num2%num1,num1);
        if(num2%num1==0)
       return num1;
    
    }
    
}