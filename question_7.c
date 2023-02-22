//7. Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int a,i=0;
    printf("enter a number:");
    scanf("%d",&a);
    while(a>0)
    {
        a=a/10;
        i++;
    }
    printf("numbers of digits:%d",i);
}
