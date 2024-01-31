/* Q- print
     
                  *
                 ***
                *****
               *******
              *********
    */   
#include<stdio.h>
int main()
{
    for(int i=0;i<=4;i++)
    {
        for(int j=0;j<=8;j++)
        {
            if(j>=4-i && j<=4+i)
            printf("*");
           else
           printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}