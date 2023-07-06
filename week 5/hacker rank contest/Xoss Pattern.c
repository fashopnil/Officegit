#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("for i=%d\n",i);
        for(j=1;j<=n;j++)
        {
            printf("for j=%d\n",j);
        }
    }    
    return 0;
}