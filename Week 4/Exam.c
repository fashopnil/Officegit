#include <stdio.h>
int main()
{
    int s, i, sum = 0,last;
    scanf("%d", &s);
    while(s>0)
    {
        last = s % 10;
        sum += last;
        s/=10;
    }
    printf("%d",sum);

    return 0;
}