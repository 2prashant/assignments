/*
                 Handling multiple Strings in C Language
1. Write a program to find the number of vowels in each of the 5 strings stored in two 
dimensional arrays, taken from the user.
*/
#include<stdio.h>
int main()
{
    char str[5][100];
    int vowel=0,i,j;
    printf("Enter string ");
    for(int i=0;i<5;i++)
    {
      fgets(str[i],100,stdin);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;str[i][j];j++)
        {
            if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u')
             vowel++;
        }
        printf("%s = %d\n",str[i],vowel);
        vowel=0;
    }
    return 0;

}