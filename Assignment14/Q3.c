/*3. Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.
*/
#include<stdio.h>
int main()
{
    int num[10],even=0,odd=0;
    printf("enter 10 number");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]%2==0)
        {
            even+=num[i];
        }
        if(num[i]%2!=0)
        {
            odd+=num[i];
        }
    }
    printf("\nsum of total even number=%d",even);
    printf("\n sum of total odd number=%d",odd);
    return 0;
}
