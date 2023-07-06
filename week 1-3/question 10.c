#include <stdio.h>

int main() {
    int n,i,z;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
    z=n%i==0;
    if(z==2)
        {
            printf("composite");
        }
    else{
            printf("Prime");
        }
    }
return 0;
}



