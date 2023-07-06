#include<stdio.h>
int main()
{
    int n,i,input[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&input[i]);

    }
    int largest=input[0];
    for(i=0;i<n;i++)
    {
        if(largest<input[i])
        {
            largest=input[i];
        }

    }
    int arr[largest+1];
    for(i=0;i<=largest;i++)
    {
        arr[i]=0;
    }
    for(i=0;i<n;i++)
    {
        arr[input[i]]+=1;
    }
    int uni=0; int com=0;
    for(i=largest;i>0;i--)
    {
        if(arr[i]==1)
        {
            uni+=1;
        }
        else if(arr[i]>=2)
        {
            com+=1;
        }
    }

        if(uni>1)
        {
            printf("No");
        }
        if(com>1)
        {
            printf("Yes");
        }
        return 0;
}
