#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int array[n];
    int *ptr=array;
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr = array;
    for(i=0;i<n;i++)
    {
        printf("%d ",*ptr);
    }
    return 0; 
}