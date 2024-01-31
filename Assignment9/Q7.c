/*
7. Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    float unitn,bill=0;
    while(1)
   {
    printf("-------------------------------------------------------------------------------------------\n");
    printf("calculate electricity unit charge with additional surcharge of 20%% is added in  the bill");
    printf("\n1.first 50=>unit Rs.0.50/unit");
    printf("\n2.the next unit<150  Rs. 0.75/unit");
    printf("\n3.the next unit<250 unit Rs.1.20/unit");
    printf("\n4.the next above 250< unt  Rs.1.50");
    printf("\n5Exit");
    printf("\n\nEnter your choice");
    scanf("%d",&num);
    switch(num)
    {

        case 1:
               printf("\nEnter unit =");
               scanf("%f",&unitn);
               bill=(unitn*0.50);
               bill=bill+bill*0.20;
               printf("Total bill=%f\n\n",bill);
               printf("--------------------------------------------------------------------------------------------\n");
               break;
        case 2:
                printf("\n Enter unit =");
                scanf("%f",&unitn);
                unitn=unitn-50;
                bill=((25)+(unitn*0.75));
                 bill=bill+bill*0.20;
                printf("total bill=%f\n\n",bill);
                printf("-------------------------------------------------------------------------------------------\n"); 
                break;
            
        case 3:               
                 printf("\nEnter unit=");
                 scanf("%f",&unitn);
                 unitn=unitn-150;
                 bill=((100)+(unitn*1.20));
                  bill=bill+bill*0.20;
                 printf("Total bill=%f\n\n",bill);
                 printf("----------------------------------------------------------------------------------------\n");
                 break;

        case 4: 
                printf("\nEnter unit=");
                scanf("%f",&unitn);
                unitn=unitn-250;
                bill=((220)+(unitn*1.50));
                 bill=bill+bill*0.20;
                printf("Total bill=%f",bill);
                printf("-------------------------------------------------------------------------------------------\n");
                break;
        case 5:
                exit(0);

        default :
                  printf("Invalid choice.");
    }
   }
   return 0;
}