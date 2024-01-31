//4. Write a program in C to find the sum of right diagonals of a matrix.
#include<stdio.h>
int main()
{
    int arr[3][3],i,j,sum=0;
    printf("Enter matrix of element:");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(i==j)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("sum of diagonals element=%d",sum);
    return 0;

}