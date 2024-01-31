/*8. Given a list of words followed by two words, the task is to find the minimum distance 
between the given two words in the list of words.
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
 word1 = “the”, word2 = “fox”, OUTPUT : 1 )
 */
#include<stdio.h>
#include<string.h>
int main()
{
    char words[10][30]={"my","name","is","parteek"};
    char words1[]="my";
    char words2[]="prateek";
    int i,w1=-1,w2=-1,min=-7,temp;
    for(i=0;i<4;i++)
    {
        if(strcmp(words[i],words1)==0)
        w1=i;
        if(strcmp(words[i],words2)==0)
        w2=i;
        if(w1!=-1 && w2!=-1)
         min=abs(w2-w1);
    }
     printf("%d",min-1);

    return 0;
}