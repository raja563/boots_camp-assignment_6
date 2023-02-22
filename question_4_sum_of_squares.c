//WAP to calculate sum of square of first N natural numbers.
#include<stdio.h>
main()
{
    int i,square=0,sum=0;
    for(i=1;i<30;i++)
    {
        square =i*i;
        sum=sum+square;

        printf(" value: %7d square :%7d   and sum of square:     %7d\n",i,square,sum);
    }
    getch();
    return 0;

}
