//2. Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    int arr1[3][3],arr2[3][3],i,j,product[3][3],sum=0,k;
    printf("Enter first  row matrix element:\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\nEnter second row matrix element:");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\nProduct of matrix:\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
      {
        for( k=0;k<=2;k++)
        {
            sum=sum+arr1[i][k]*arr2[k][j];
        }
        product[i][j]=sum;
         sum=0;
       }    
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}