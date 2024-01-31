/*7. Write a program in C to count the total number of alphabets, digits and special 
characters in a string.
*/
#include<stdio.h>
int main()
{
    char str[1000];
    int i,j,k,numcount=0,alphcount=0,specount=0;
    printf("Enter character=");
    fgets(str,1000,stdin);
    for(i=0;str[i];i++)
    {
        if((str[i]<='a' && str[i]<='z') || (str[i]<='A' && str[i]>='Z'))
        {
             alphcount++;
        }
    }
    for(j=0;str[j];j++)
    {
        if(str[j]<='1' && str[k]>='9')
        {
            numcount++;
        }
    }
    for(k=0;str[k];k++)
    {
        if((str[k]<=!'a' && str[k]<=!'z') &&  (str[k]<=!'A' && str[k]<=!'Z') && (str[k]<=!'1' && str[k]<=!'9'))
        {
            
        }
    }
    printf("\n count total number of alphabets=%d",alphcount-1);
    printf("\n count total number of number=%d",numcount-1);
    printf("\n count total number of special chracter=%d",specount-1);
    return 0;
}
