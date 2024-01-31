//8. Write a program in C to print or display an upper triangular matrix.
#include<stdio.h>
int main()
{
    int arr[3][3],i,j;
    printf("Enter matrix element:\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("upper triangular matrix:\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(i<=j)
            {
                printf("%d ",arr[i][j]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}