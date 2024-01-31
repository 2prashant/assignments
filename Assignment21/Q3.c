//3. Write a function to display employee data. [ Refer structure from question 1 ].
#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[30];
    float salary;
};
struct employee input(struct employee memb)
{
    printf("Enter employee id,name,salary\n");
    scanf("%d",&memb.id);
    fflush(stdin);
    fgets(memb.name,30,stdin);
    memb.name[strlen(memb.name)-1]='\0';
    scanf("%f",&memb.salary);
    return memb;
}
struct employee display(struct employee memb)
{
    printf("\n%d %s %f ",memb.id,memb.name,memb.salary);
}
int main()
{
     struct employee memb1,memb2;
     struct employee b1,b2;
     b1=input(memb1);
     b2=input(memb2);
     display(b1);
     display(b2);
     return 0;
}