#include<stdio.h>
void print_hash(int a)
{
    int i;
    for(i=0;i<a;i++)
    {
        printf("#");
    }
    printf("\n");
}
int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        print_hash(i);
    }
    
    return 0;
}