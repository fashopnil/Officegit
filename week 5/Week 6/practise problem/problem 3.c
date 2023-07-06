#include<stdio.h>
char final[1000]="";
void jora(char str[])
{
    strcat(final,str);
    strcat(final," ");
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char str[500];
        scanf("%s",str);
        jora(str);
    }
    printf("%s",final);
    return 0; 
}