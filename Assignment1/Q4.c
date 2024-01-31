/* 4. WAP to find the area of the circle. Take radius of circle from user as input and print the 
result in below given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area 
& R with radius.
*/
#include<stdio.h>
int main()
{
    int radius;
    printf("enter radius and find the area of the circle: ");
    scanf("%d",&radius);
    float Area=3.14*(radius*radius);
    printf("Area of circle is %f having the radius %d",Area,radius);
    return 0;
}