/*
4. Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
*/
/*
//M-1:
// NOT RIGHT
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[100],d,temp=0;
    int n;
    printf("array size=");
    scanf("%d",&n);
    printf("Indicative value =");
    scanf("%d",&d);
    printf("Enter 10 number=");
    for(int i=0; i<=n; i++)
    {
       scanf("%d",&arr[i]);
    }
    for(int j=0; j<d; j++)
    {
        temp=arr[0];
        for(int i=0; i<=n; i++)
        {
            arr[i]=arr[i+1];
            printf("%d ",arr[i]);
        }
        arr[n-1]=temp;
        printf("\n");

    }

}
*/
// M-2:

#include<stdio.h>
int main()
{
    int arr[1000],n,d;
    printf("direction=");
    scanf("%d",&d);
    printf(" Enter Array size=");
    scanf("%d\n",&n);
    for(int i=0;i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
     for(int i=1+d; i<=n; i++)
     {
        printf("%d ",arr[i]);
     }
     for(int i=0;i<=d;i++)
     {
        printf("%d ",arr[i]);
     }
     return 0;
}

//M-3
