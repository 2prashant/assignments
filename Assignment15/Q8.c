//8. Write a function in C to print all unique elements in an array.
#include<stdio.h>
int main()
{
    int arr[1000],n,i,j,count,check=0;
    printf("enter array size=");
    scanf("%d",&n);
    printf("Enter array element=");
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n;i++)
    {
       for(int j=i+1;j<=n;j++)
        {
            check=0;
            if(arr[i]==arr[j])
            {
                check++;
                break;
            }
        }
        if(check==0)
           {
               printf("%d ",arr[i]);
           }
             
    }
     return 0;
}
