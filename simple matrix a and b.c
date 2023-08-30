#include<stdio.h>
int main()
{
    int i,j;
    int A[3][4],B[3][4],C[3][4];
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("enter A Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    printf("enter B Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {

       for(j=0;j<4;j++)
    {
        C[i][j]=A[i][j]+B[i][j];
    }
    printf("\n");

    }
    //printing c matrix
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\n",C[i][j]);
        }
        printf("\n");
    }



}
