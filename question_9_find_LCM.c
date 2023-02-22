//9. Write a program to calculate LCM of two numbers.
#include<stdio.h>
int main()
{
    int a,b,num1,num2,lcm,temp;
    printf("enter two number:");
    scanf("%d%d",&num1,&num2);
    a=num1;
    b=num2;

    while(num2!=0)
    {
        temp=num2;
        num2=num1%num2;
        num1=temp;
    }
    lcm=(a*b)/num1;
    printf("LCM of %d and %d = %d",a,b,lcm);
    return 0;
}