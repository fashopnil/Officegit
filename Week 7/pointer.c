#include<stdio.h>
void ArrayMaxMin(int a,int ara[],int *max,int *min)
{
    int i;
    *max=ara[0];
    *min=ara[0];
    for(i=0;i<a;i++)
    {
        if(ara[i]>*max)
        *max=ara[i];
        if(ara[i]<*min)
        *min=ara[i];
    }
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
    int maxx,minn;
    ArrayMaxMin(n,ara,&maxx,&minn);

    printf("%d\n%d",maxx,minn);

    return 0;
}