/*
4. Write a function to find the highest salary employee from a given array of 10
employees. [ Refer structure from question 1]
*/
#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[30];
    float sal;
};
struct employee input(struct employee memb)
{
     printf("Enter employee id,name,salary:\n");
     scanf("%d",&memb.id);
     fflush(stdin);
     fgets(memb.name,30,stdin);
     memb.name[strlen(memb.name)-1]='\0';
     scanf("%f",&memb.sal);
     return memb;
}
struct employee display(struct employee b)
{
    printf("\n%d %s %f",b.id,b.name,b.sal);
}
void highestsal(struct employee b[],int size)
{
    int i,r;
    struct employee temp;
    for(int r=0;r<size;r++)
    {
        for(int i=0;i<size-1-r;i++)
        {
            if(b[i].sal<b[i+1].sal)
            {
              temp=b[i];
              b[i]=b[i+1];
              b[i+1]=temp;
            }

        }
    }
}
int main()
{
    struct employee memb[10];
    struct employee b[10];
    for(int i=0;i<10;i++)
    {
          b[i]=input(memb[i]);
    }
    highestsal(b,10);
    for(int i=0;i<10;i++)
    {
        display(b[i]);
    }
    return 0;
}
