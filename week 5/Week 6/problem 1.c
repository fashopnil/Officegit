#include <stdio.h>
int factorial(int n)
{
    int sum=1,i;
    for(i=1;i<=n;i++)
    {
        sum*=i;
    }
    return sum;
}
int ratio_of_factorial(int a,int b)
{
    int ratio;
    ratio=factorial(a)/factorial(b);
    return ratio;
}
int main()
{
    int a,b,result;
    scanf("%d%d",&a,&b);
    result=ratio_of_factorial(a,b);
    printf("%d",result);
    return 0;
}