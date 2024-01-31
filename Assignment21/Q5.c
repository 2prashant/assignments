/*
5. Write a function to sort employees according to their salaries [ refer structure from
question 1]
*/
#include<stdio.h>
#include<string.h>
struct employee
{
        int   id;
        char  name[30];
        float sal;
};
struct employee input(struct employee memb)
{
    printf("Enter employees id,name,salari:\n");
    scanf("%d",&memb.id);
    fflush(stdin);
    fgets(memb.name,30,stdin);
    memb.name[strlen(memb.name)-1]='\0';
    scanf("%f",&memb.sal);
    return memb;
}
void display(struct employee b)
{
    printf("\n%d %s %f",b.id,b.name,b.sal);
}
struct employee sort(struct employee b[],int size)
{
        int r,i;
        struct employee temp;
        for(r=0;r<size;r++)
        {
            for(i=0;i<size-1-r;i++)
            {
                if(b[i].sal>b[i+1].sal)
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
    struct employee memb1;
    struct employee b[10];
    for(int i=0;i<3;i++)
    {
        b[i]=input(memb1);
    }
    sort(b,3);
    for(int i=0;i<3;i++)
    {
        display(b[i]);
    }
    return 0;
}