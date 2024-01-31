/* 17. Write a program which takes the length of the sides of a triangle as an input. Display 
whether the triangle is valid or not. 
*/
#include<stdio.h>
int main()
{
    float hop,H,B;
    printf("enter  length of the sides of a triangle=");
    scanf("%d%d%d",&hop,&H,&B);
    if(hop*hop>H*H+B*B)
    {
        printf("triangle is valid");
    }
    else{
        printf("triangle is not valid");
    }
    return 0;
}
