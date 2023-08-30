#include<stdio.h>
int main()
{
    int num,temp,sum=0,r;
    printf("enter any num:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
     if(sum==num)
        printf("armstrong number");
     else
        printf("not armstrong number");
}
