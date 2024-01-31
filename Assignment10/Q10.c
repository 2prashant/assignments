/*10. Write a function to print all prime factors of a given number. For example, if the 
number is 36 then your result should be 2, 2, 3, 3. (TSRN)
*/
#include<stdio.h>
int main()
{
    void primfactor(int num);
    int num;
    printf("print all prime factors number\n");
    printf("\nEnter number=");
    scanf("%d",&num);
    primfactor(num);
    return 0;
}
 void primfactor(int num)
 {
    for(int i=num-1;num!=1;i--)
    {
        while(num%i==0)
        {
            num=num/i;
            printf("%d ",i);
        }
    }

 }