#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int unique_array[n];
    int unique_array_index=0;
    for(i=0;i<n;i++)
    {
        int select=arr[i];
        int found=0;
        for(j=0;j<n;j++)
        {
            if(unique_array[j]=ara[i])
            {
                found=1;
            }
            if (found==0)
            {
                unique_array[i]== arr[i];
                unique_array_index++;
            }
        }
    }
    return 0;
}