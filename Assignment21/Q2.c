/*
2. Write a function to take input employee data from the user. [ Refer structure from
question 1 ].
*/
#include<stdio.h>
#include<string.h>
struct empolyee
{
    int id;
    char name[30];
    float  salary;
};
struct empolyee input(struct empolyee memb)
{
     printf("Enter empolyee id,name,salary:\n");
     scanf("%d",&memb.id);
     fflush(stdin);
     fgets(memb.name,30,stdin);
     memb.name[strlen(memb.name)-1]='\0';
     scanf("%f",&memb.salary);
     
}
int main()
{
    struct empolyee memb1,memb2;
    input(memb1);
    return 0;

}
