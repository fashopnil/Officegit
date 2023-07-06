#include<stdio.h>
int main()
{
    int n,i,chk;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    chk=ara[0];
    int cnt=0;
    for(i=0;i<n;i++)
    {
        if(chk==ara[i])
        {
            cnt++;
        }
    }
    if(cnt==n)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
