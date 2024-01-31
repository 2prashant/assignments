//2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int main()
{
    void smallnum(int num[10]);
    int num[10];
    for(int i=0;i<9;i++)
    {
        scanf("%d",&num[i]);
    }
    smallnum(num);
}
void smallnum(int num[10])
{
    int temp=0;
    for(int i=0;i<9;i++)
    {
        for(int j=1+i; j<10;j++)
        {
            if(num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("\n Smallest number=%d",num[0]);
}