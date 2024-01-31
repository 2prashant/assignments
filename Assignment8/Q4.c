#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<19;j++)
        {
            if(i<=j && j<=18-i)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}