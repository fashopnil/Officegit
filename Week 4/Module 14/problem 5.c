#include<stdio.h>
#include<string.h>
int main()
{
    char first[102],second[102];
    int i;
    fgets(first,sizeof(first),stdin);
    fgets(second,sizeof(second),stdin);
    int len=strlen(first)-1;
    for(i=0;i<len;i++)
    {
        if(first[i]>='A' && first[i]<='Z')
        {
            first[i]+=32;
        }
        if(second[i]>='A' && second[i]<='Z')
        {
            second[i]+=32;
        }
    }
    
    for(i=0;i<len;i++)
    {
        if(first[i]<second[i])
        {
            printf("-1");
            return;
        }
        else if(first[i]>second[i])
        {
            printf("1");
            return;
        }
    }
     printf("0");

    

    return 0;
}