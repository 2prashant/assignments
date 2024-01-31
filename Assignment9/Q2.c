/*
2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int z,a,b;
    float x,y;
    while(1)
   { 
    printf("\n1.Addition ");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.division");
    printf("\n5Exit");
    printf("\n\n Enter your choice");
    scanf("%d",&z);
    switch(z)
    {
        case 1:
               printf("\nEnter two number");
               scanf("%d%d",&a,&b);
               printf("sum=%d",a+b);
               break;
        case 2:
               printf("\nEnter two number");
               scanf("%d%d",&a,&b);
               printf("difference=%d",a-b);
               break;
        case 3:
              printf("\nEnter two number");
              scanf("%d%d",&a,&b);
              printf("multiply=%d",a*b);
              break;
        case 4:
              printf("\nEnter two number");
              scanf("%f%f",&x,&y);
              printf("divid=%f",x/y);
              break;
         case 5:
                exit(0);
        default:  
                printf("Invalid choice");
    }
   }
   return 0;
}
