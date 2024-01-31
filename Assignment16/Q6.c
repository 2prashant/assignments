//6. Write a program in C to find the sum of rows and columns of a Matrix.
#include<stdio.h>
int main()
{
    int arr[3][3],i,j,sumrow=0,sumcolom=0;
    printf("enter array element:");
    for(i=0;i<=2;i++)
    {
       for(j=0;j<=2;j++)
       {
          scanf("%d",&arr[i][j]);
       }
    }
    for(i=0;i<=2;i++)// sum of row .
    {
        sumrow=0;
        for(j=0;j<=2;j++)
        {
            sumrow=sumrow+arr[i][j];
        }
        printf("\nsum of %d row matrix=%d",i,sumrow);
    }
    printf("\n");
    // sum of colom.
    for(j=0;j<=2;j++)
    {
         sumcolom=0;
        for(i=0;i<=2;i++)
        {
           sumcolom=sumcolom+arr[i][j];
        }
     printf("\n sum of %d colom matrix=%d",j,sumcolom);
    }
     return 0;
}