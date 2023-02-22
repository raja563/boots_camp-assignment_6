// wap to find a  factorial .
#include<stdio.h>
int main()
{
    long int n, i,fact=1;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
    for(i=1;i<=n;i++)
     {
        fact=fact*i;

    }
     printf(" facotorial of %d is : %d ",n,fact);
    }
}
