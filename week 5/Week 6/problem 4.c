#include<stdio.h>
void fun(int a)
{
    if(a>0)
    printf("%d",a); 
    fun(a-1);
}
int main(void)
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}