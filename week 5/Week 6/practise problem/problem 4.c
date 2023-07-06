#include<stdio.h>
#include<limits.h>
int test(int n,int ara[])
{
    int i,ara;
    int max=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(ara[i]>INT_MIN)
        {
            max=ara[i];
        }
    }
    int freq[max+1];
    for(i=0;i<=max;i++)
    {
        freq[i]=0;
    }
    for(i=0;i<max;i++)
    {
        freq[ara[i]]++;
    }
    for(i=0;i<=max;i++)
    {
        printf("%d",freq[i]);
    }

    return 0;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    test(n,ara[]);
    return 0;
}