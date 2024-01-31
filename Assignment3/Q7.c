//7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.
#include<stdio.h>
int main()
{
    int b,a,c,qud;
    printf("enter roots in Quadratic equaction");
    scanf("%d%d%d",&b,&a,&c);
    qud=b*b-4*a*c;
    if(qud>0)
    {
        printf("root real & distinct");
    }
    if(qud=0)
    {
        printf("root real & equal");
    }
    if(qud<0)
    {
        printf("root imaginary");
    }
    return 0;
}
