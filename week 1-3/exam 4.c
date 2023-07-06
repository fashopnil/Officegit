#include<stdio.h>
int main()
{
    int input,sum=0,box=0;
    scanf("%d",&input);
    while(input!=0)
    {
        input= input%10;
        box= input/10;
        sum=input+input;
    }
     printf("%d ",sum);
    return 0;
}
