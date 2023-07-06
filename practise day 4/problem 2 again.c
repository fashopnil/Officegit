#include<stdio.h>
int main()
{
    int n,i,q;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    scanf("%d",&q);
    int in=0;int v=0;
    for(i=0;i<q;i++)
    {
        scanf("%d %d",&in ,&v);
        ara[in]=ara[in]+v;

    }

    for(i=0;i<n;i++)
    {
        printf("%d ",ara[i]);
    }

    return 0;
}
