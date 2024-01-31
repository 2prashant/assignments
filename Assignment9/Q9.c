/*9. Program to Convert even number into its upper nearest odd number
Switch Statement.
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number=");
    scanf("%d",&num);
    switch(num%2==0)
    {
        case 1:
               printf("upper nearest odd number=%d",num+1);
               break;
        case 0:
              printf("upper nearst odd number=%d",num);
              break;
    }

}
