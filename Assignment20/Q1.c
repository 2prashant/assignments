 /*                                 Pointers
                                  
1. Write a function to swap values of two in variables of calling function. (TSRS)
*/
#include<stdio.h>
int main()
{
    int swap(int *num1,int *num2);
    int num1,num2;
    printf("Enter two number");
    scanf("%d%d",&num1,&num2);
    swap(&num1,&num2);
    printf("swap=%d %d",num1,num2);
    return 0;
}
int swap(int *num1, int *num2)
{
     int temp;
     temp=*num1;
     *num1=*num2;
     *num2=temp;
     return (*num1,*num2);

}


