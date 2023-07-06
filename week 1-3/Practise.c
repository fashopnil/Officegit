#include<stdio.h>
int main()
{
    int n,i,ara[5];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&ara[i]);
        }

    }
    int max=ara[0];
    for(i=0;i<n;i++)
    {
        if(ara[i]>max)
        {
            max=ara[i];
        }
    }
    printf("%d",max);
     return 0;
}
