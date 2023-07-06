#include<stdio.h>
#include<string.h>
int main()
{
     int row,col,i,j;
     scanf("%d%d",&row,&col);
     int a[row][col],b[row][col],c[row][col];
     printf("Enter A matrix value:");
     for(i=0;i<row;i++)
     {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
     }
     printf("Enter B matrix value:");
     for(i=0;i<row;i++)
     {
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
     }
     for(i=0;i<row;i++)
     {
        for(j=0;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
     }
     printf("Here is the Addition value of A & B matrix:");
     for(i=0;i<row;i++)
     {
        for(j=0;j<col;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
     }

    return 0;
}