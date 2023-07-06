#include<stdio.h>
int main()
{
    int n,i,k,nr=0;
    int ara[100];
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(ara[i]>=ara[k] && ara[i]>0)
        {
            nr++;
        }
    }

    printf("%d",nr);
    return 0;
}
