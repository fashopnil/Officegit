#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char S[100];
    scanf("%s",S);
    for(i=0;i<strlen(S);i++)
    {
        if(S[i]!='0' || S[i]!='1')
        printf("NO");
        else
        printf("Yes");

    }
    return 0;
}