#include<stdio.h>
int main()
{
    int n,k,i;
    scanf("%d%d",&n,&k);

    for(i=1;i<=k;i++){
    int lastd= n%10;
    if(lastd!=0)
    {
        n =n-1;

    }
    else
    {
        n= n/10;

    }
    }
    printf("%d\n",n);


    return 0;

}
