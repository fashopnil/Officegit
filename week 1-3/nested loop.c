#include<stdio.h>
int main()
{
    int i,j;
    int n=7;
    for(j=1;j<=n;j++)
    {
            printf("#");
    }
        printf("\n");

    for(i=1;i<=(n-2);i++)
    {
        printf("#");
        for(j=1;j<=n;j++)
        {
            printf(" ");
        }
        printf("#\n");

    }
     for(j=1;j<=n;j++)
        {
            printf("#");
        }
        printf("\n");


    return 0;
}
