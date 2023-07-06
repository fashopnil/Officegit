#include<stdio.h>
#include<string.h>
void uppercase(char *word)
{
    int i;
    for(i=0;i<strlen(word);i++)
    {
        if(word[i]%2==0)
        word[i]=word[i]-32;
    }
    printf("%s",word);
    
}
int main()
{
    int i;
    char input[100];
    scanf("%s",input);
    int *ptr;
    ptr=&input;
    uppercase(input);
    

    return 0;
}