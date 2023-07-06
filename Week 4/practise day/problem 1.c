#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="bbbbaccddd";
    int n=strlen(str),i=0,largestElement=26;
    int freq[largestElement+1];
    for(i=0;i<=largestElement;i++)
    {
        freq[i]=0;
    }
    for(i=0;i<largestElement;i++)
    {
        freq[(str[i]-'a')+1]++;
    }
    int max=0;
    
    
    return 0;
}