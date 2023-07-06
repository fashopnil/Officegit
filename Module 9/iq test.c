#include<stdio.h>
int main()
{
    int n,i,ec=0,oc=0;
    int ara[105];
    int ans;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(ara[i]%2==0)
        {
            ec++;
        }
        else{
            oc++;
        }
    }
    if(ec==1)
    {
        for(i=1;i<=n;i++)
        {
            if(ara[i]%2==0)
            {
                ans = i;
            }
        }
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            if(ara[i]%2==1)
          ans=i;
        }
    }
    printf("%d",ans);
     return 0;
}
