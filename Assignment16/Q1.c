 /*                  Multi-Dimensional Array in C Language
                   
1. Write a program to calculate the sum of two matrices each of order 3x3.
*/
#include<stdio.h>
int main()
{
    int arr1[3][3],arr2[3][3],sum[3][3],i,j;
    printf("Enter first matrix  element\n");
    for(i=0;i<=2;i++)
    {    
        for(j=0;j<=2;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\n");
    printf("Enter second matrix element\n");
     for(i=0;i<=2;i++)
    {    
        for(j=0;j<=2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\n");
   printf("sum of matrix\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
  return 0;
}