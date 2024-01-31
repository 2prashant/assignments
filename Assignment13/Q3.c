//3. Write a recursive function to calculate sum of first N even natural numbers.
#include<stdio.h>
int main()
{
    int evensum(int num);
    int num;
    printf("Enter number");
    scanf("%d",&num);
    printf("\n%d",evensum(num));
}
 int evensum(int num)
 {
    int s;
    if(num==1)
     return 0;
    s=2*num-2+evensum(num-1);
    return s;
 }