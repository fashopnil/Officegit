#include<stdio.h>
int main()
{
    int test;
scanf("%d",&test);
int n,i,m;
m=n/2;
for(int j=1; j<=test; j++)
{
scanf("%d",&n);

int flag=0;
    for(i=2;i<m;i++)
    {
        
        if(n%i==0)
        {
            flag=1;
            break;
        }
        
    
    }
    if(flag==1)
    {
        printf("No");
        printf("\n");
    }
    else if(flag==0)
    {
        printf("Yes");
        printf("\n");
    }
}
    
    return 0;

}