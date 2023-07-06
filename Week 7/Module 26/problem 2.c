#include<stdio.h>
void find_max_min(int n,int nums[],int *p,int *q)
{
    int i;
    *p=nums[0];
    *q=nums[0];
    for(i=0;i<n;i++)
    {
        if(nums[i]>*p)
        {
            *p=nums[i];
        }
        if(nums[i]<*q)
        {
            *q=nums[i];
        }


    }
}
int main()
{
    int ara[]={12,6,9,3,4,21,66};
    // printf("%d",sizeof(ara)/sizeof(4));
    int n=7;
    int maxx,minn;
    find_max_min(n,ara,&maxx,&minn);
    printf("%d\n%d",maxx,minn);
    return 0;
}