//10. C program to find all roots of a quadratic equation using switch case.
#include<stdio.h>
int main()
{
    int b,a,c;
    printf("enter number");
    scanf("%d%d%d",&b,&a,&c);
    

    switch(b*b-4*a*c==0)
   {
       case 1: 
                printf("Equal  ");
        case 0:switch(b*b-4*a*c>0)
             {
                 case 1:printf("real roots");  

                 case 0:printf("Emignary roots");

                 }
             }
            
        
   }