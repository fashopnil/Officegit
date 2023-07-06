#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    scanf("%s",str1);
    for(int i=str1['\0']-1;str1[i]!=0;i--)
    {
        str2 =str1[i];
    }
    if(str1==str2)
    {
       printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}