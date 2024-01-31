/*
5. Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid");
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
   while(1) 
   {
    printf("\n\nExit=0");
    printf("\nEnter number=");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
               printf("\ngood");
               break;
        case 2:
               printf("\nbetter");
               break;
        case 3:
               printf("\nbest");
               break;
        case 0:
               exit(0);

       default: 
                printf("Invalid choice");

    }
   } 
}
