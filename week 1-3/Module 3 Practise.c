#include<stdio.h>
int main()
{
    int n,i,ara[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ara[0]==ara[i])
        {
            printf("no");
        }
        else{
            printf("yes");
        }

    }

    return 0;

}
