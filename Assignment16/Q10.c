//10. Write a program in C to find the row with maximum number of 1s.
    #include<stdio.h>
    int main()
    {
        //NOT slove
        int arr[100][100],i,j,sum=0,n,max,index;
        printf("Enter array size=");
        scanf("%d",&n);
        printf("Enter matrix element");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(arr[i][j]==1)
                sum=sum+arr[i][j];
            }
        }
        if(sum>max)
        {
            max=sum;
            index=i;
        }
        printf("max=%d\n index=%d",max,index);
        return 0;
    }