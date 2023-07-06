#include<stdio.h>
int main()
{
    int n,i,j,target,answer;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(arr[i]+arr[j]==target)
                {
                    answer=1;
                }

            }
            
        }
    }
    if(answer==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}