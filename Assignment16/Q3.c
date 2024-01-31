//3. Write a program in C to find the transpose of a given matrix.
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
    printf("\nTranspose of matrix\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}