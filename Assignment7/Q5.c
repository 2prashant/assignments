//5. Write a program to check whether two given numbers are co-prime numbers or not.
/*
 #include<stdio.h>
int main()
{
    int num1,num2,i,HCF;
    printf("check number co-prime or not \nEnter number=");
    scanf("%d%d",&num1,&num2);
    for(i=1;i<=num1*num2;i++)
    {
        if((i%num1==0) && (i%num2==0))
        {
            HCF=(num1*num2)/i;
          //  printf("HCF=%d",HCF);
            break;
        }
    }
    if(HCF==1)
    {
        printf("co-prime number");
    }
    else
    {
        printf("not co-prime number");
    }
    return 0;

}
*/

#include<stdio.h>
int main()
{
    int num1,num2,i,hcf;
    printf("print number co-prime or not");
    scanf("%d%d",&num1,&num2);
    int smv=num1<num2?num1:num2;
    for(i=1;i<=smv;i++)
    {
        if((num1%i==0) && (num2%i==0))
        {
            hcf=i;
        }
    }
    if(hcf==1)
    {
        printf("co-prime number");
    }
    else{
        printf("not co-prime number");
    }
    return 0;
}