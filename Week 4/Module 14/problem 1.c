#include<stdio.h>
int main()
{
    int N=8,i;
    int ara[8]={12,7,9,3,15,2,6,5};
    int sorted_ara[8];

    for(i=0;i<N;i++)
    {
        printf("%d",ara[i]);
    }
    printf("\n");



    int min = ara[0];
    int m_ind=0;
    for(i=0;i<N;i++)
    {
        if(min>ara[i])
        {
            min=ara[i];  
            m_ind= i;
        }
    }
    sorted_ara[0]=min;
    ara[m_ind]=9999;

    for(i=0;i<N;i++)
    {
        printf("%d",ara[i]);
    }
    return 0;
}