// 5. WAP to calculate the length of String using printf function.
/* #include<stdio.h>
int main()
{
    char ch[20]="Prashantkr";
    int x=0;
    for(int i=0;i<20;i++)
    {
        if(ch[i]!='\0')
        {
            x++;
        }
        else
            break;
    }
    printf("Size %d ",x);
    
    return 0;

}
*/
#include<stdio.h>
int main()
{
    int x;
    x=printf("hello world");
    printf(" length of string=%d",x);

}