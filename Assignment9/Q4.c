/*
4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int base,hight,hypo,num;
    while(1)
   {
    printf("\n1.check three number are length of an isosceles triangle or not");
    printf("\n2.check lengths of sides of a right angled triangle or not");
    printf("\n3.Check number are equilateral triangle or not");
    printf("\n4.Exit");
    printf("\n\n Enter your choice=");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
                 printf("Enter three number=");
                 scanf("%d%d%d",&base,&hight,&hypo);
                 if((base==hight) ||(hypo==base) || (hight==hypo))
                 {
                    printf("isosceles traingle");
                 }
                 else
                 {
                    printf("Not isosceles traingle");
                 }
                 break;

        case 2:   
                 printf("enter three number =");
                 scanf("%d%d%d",&base,&hight,&hypo);
                 if((base*base==hight*hight+hypo*hypo) || (hight*hight==hypo*hypo+base*base) || (hypo*hypo==base*base+hight*hight))
                 {
                    printf("right angle traingle");
                 }
                 else
                 {
                    printf("not right angle traingle");
                 }
                 break;

        case 3:
                printf("enter three number =");
                scanf("%d%d%d",&base,&hight,&hypo);
                if((base==hight) && (base==hypo))
                {
                    printf("equilateral triangle");
                }
                else
                {
                   printf(" not equilateral triangle");
                }
                break;

        case 4:
                  exit(0);

        default :
                   printf("Invalid choice");
    }
   }
   return 0;
}
