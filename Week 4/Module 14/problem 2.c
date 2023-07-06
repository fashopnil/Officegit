#include<stdio.h>
int main()
{
    int N=8,i,j;
    int ara[8]={12,7,9,3,15,2,6,5};
    int sorted_ara[8];

    for(i=0;i<N;i++)
    {
        printf("%d",ara[i]);
    }
    printf("\n");

    for(i=0;i<N-1;i++)
    {
        //compare ara[i] & ara[i]+1
        if(ara[i]>ara[i+1])
        {
            temp=ara[i];
            ara[i]=ara[i+1];

        }
    }




    for(i=0;i<N;i++)
    {
        printf("%d",sorted_ara[i]);
    }
    printf("\n");


    return 0;
}