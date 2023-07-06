#include<stdio.h>
int main()
{   int n,i,m;
    scanf("%d %d",&n,&m);


        if(n<m)
        {
            for(i=5;i<=m;i++)
            printf("%d ",i);
        }
        else if (n>m)
        {
            for(i=1;i<m;i++)
                printf("%d ",i);
        }

        return 0;
}
