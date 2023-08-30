#include<stdio.h>
int main()
{
    int num,i=1,sum=0;
    printf("enter the last number of the series:");
    scanf("%d",&num);
    printf("1^2+2^2+3^2+......+%d\n",num);
    while(i<=num)
    {
        sum=sum+i*i;
        i++;
    }
    printf("sum=%d\n",sum);
}
