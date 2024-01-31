/*                                 Switch Case Problems
1. Write a program which takes the month number as an input and display
number of days in that month.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    while(1)
   { 
    printf("\nEnter your choice");
     printf("\n Exit =0");
     printf("\nenter month number=");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
                 printf("jaunary");
                 break;
        case 2:
                printf("february");
                break;
        case 3:
                printf("March");
                break;
        case 4:
                printf("April");
                break;
        case 5:
                printf("May");
                break;
        case 6:
                 printf("june");
                 break;
        case 7:
                printf("july");
                break;
        case 8:
                printf("August");
                break;
        case 9:
                printf("September");
                break;
        case 10:
                 printf("October");
                 break;
        case 11:
                printf("November");
                break;
        case 12:
                 printf("December");
                 break;
        case 0:
                exit(0);
         default:
                  printf("Invalid choice");
                  
     }
   }

}