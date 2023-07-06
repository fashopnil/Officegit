#include<stdio.h>
int main()
{
    int n=100;
    int arr[n];
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n;i>0;i--)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}
