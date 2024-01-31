//6. Program to check whether a year is a leap year or not. Using switch statment.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int z,x,year;
     printf("\nenter year=");
     scanf("%d",&year);
    switch(year%100==0)
    {
         case 1:
                 {
                    switch (year%400==0)
                    {
                    case 1:
                             {
                                printf("Leap year");
                                break;
                             }
                    case 0:
                             {
                                  printf("Not leap year");
                                  break;
                             }
                    }
                    break;
                 } 
                
         case 0:
                 {
                    switch(year%4==0)
                    {
                        case 1:
                                {   
                                    printf("Leap year");
                                    break;
                                }
                        case 0:
                               {
                                   printf("Not leap year");
                                   break;
                               }
                    }
                    break;
                 }
               
         
         
    }
    
   
   return 0;

}