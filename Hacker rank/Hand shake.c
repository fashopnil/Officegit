#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    int count=0;
    count=n*(n-1)/2;
    printf("%lld",count);
    return 0;
}