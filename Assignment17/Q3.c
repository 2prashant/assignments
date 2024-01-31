//3. Write a program to count vowels in a given string.
#include<stdio.h>
int main()
{
    char str1[1000];
    int i,j,count=0;
    printf("Enter string :");
    fgets(str1,1000,stdin);
    printf("count vowels in a given string=");
    for(i=0;str1[i]!=0;i++)
    {
         if(str1[i]=='a'|| str1[i]=='e'|| str1[i]=='i'|| str1[i]=='o' || str1[i]=='u' ||str1[i]=='A'|| str1[i]=='E'|| str1[i]=='O'|| str1[i]=='I' || str1[i]=='U')
        {
            count++;
        }
    }
    printf("%d",count++);
    return 0;
}