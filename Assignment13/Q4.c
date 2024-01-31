//4. Write a recursive function to calculate sum of squares of first n natural numbers.
#include<stdio.h>
int main()
{
    int seqsumN(int num);
    int num;
    printf("Enter number=");
    scanf("%d",&num);
    printf("\n%d",seqsumN(num));
    return 0;
}
 int seqsumN(int num)
 {
    if(num>0)
    {
   return (num*num+seqsumN(num-1));
    }
    
 }