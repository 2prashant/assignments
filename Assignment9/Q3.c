/*
  3. Write a program which takes the day number of a week and displays a
  unique greeting message for the day.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
   while(1)
   {
    printf("\nprint day and greeting message");
    printf("\nExit=0");
    printf("\n\nEnter day number=");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
                printf("\nMonday");
                printf("\nGood morning");
                break;
        case 2:
                printf("\nTuseday");
                printf("\nthankes");
                break;
        case 3:
                printf("\nwednesday");
                printf("\nWelcome");
                break;
        case 4:
                printf("\nThirsday");
                printf("\nNameste");
                break;
        case 5:
                printf("\nFriday");
                printf("\nGood night");
                break;
        case 6:
                printf("\nsaturady");
                printf("\nthank you so much");
                break;
        case 7:
              printf("\nsunday");
              printf("\n holliday");
              break;

        case 0:
                exit(0);
      
         default :
                 printf("Invalid choice");
    }
   }

}