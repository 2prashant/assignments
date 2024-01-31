/*
                                    Structure
1. Define a structure Employee with member variables id, name, salary.
*/
#include<stdio.h>
#include<string.h>
struct employe
{
    int id;
    char name[30];
    float sal;
};
struct employe input(struct employe memb)
{
    printf("Enter employee detial id,name,salary:\n");
    scanf("%d",&memb.id);
    fflush(stdin);
    fgets(memb.name,30,stdin);
    memb.name[strlen(memb.name)-1]='\0';
    scanf("%f",&memb.sal);
     return memb;
}

void display(struct employe memb)
{
    
    printf("\n%d %s %f",memb.id,memb.name,memb.sal);
}
   
int main()
{
    struct employe memb1,memb2;
      
    struct employe b1,b2;
    b1=input(memb1);
    b2=input(memb2);
    display(b1);
    display(b2);
     return 0;
}



