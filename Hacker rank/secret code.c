#include<stdio.h>
int main()
{
    int test,t;
    scanf("%d",&test);
    for(t=0;t<test;t++)
    {
        int n,m,i;
        scanf("%d",&n);
        m=n/2;
        int flag=0;
        for(i=2;i<m;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
            
        }
        if(flag=0)
        {
            printf("Yes");
            printf("\n");
            
        }
        if(flag=1)
        {
            printf("No");
            printf("\n");
            
        }
    }
    return 0;
}
